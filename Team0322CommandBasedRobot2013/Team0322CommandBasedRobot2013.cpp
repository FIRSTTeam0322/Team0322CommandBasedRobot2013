#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/ResetSensors.h"
#include "Commands/DriverStationLCDOutput.h"
#include "Commands/ClearLCD.h"
#include "Commands/AutonSelector.h"

class Team0322CommandBasedRobot2013 : public IterativeRobot {
private:
	Command* autonomousCommand;
	Command* resetSensors;
	Command* driverStationLCDOutput;
	Command* clearLCD;
	
	virtual void RobotInit() {
		CommandBase::init();
		autonomousCommand = new AutonSelector();
		resetSensors = new ResetSensors();
		driverStationLCDOutput = new DriverStationLCDOutput();
		clearLCD = new ClearLCD();
		
		resetSensors->SetRunWhenDisabled(true);
		driverStationLCDOutput->SetRunWhenDisabled(true);
		clearLCD->SetRunWhenDisabled(true);
	}
	
	virtual void DisabledInit() {
		clearLCD->Start();
		resetSensors->Start();
	}
	
	virtual void DisabledPeriodic() {
		resetSensors->Cancel();
		driverStationLCDOutput->Run();
		Scheduler::GetInstance()->Run();
	}
	
	virtual void AutonomousInit() {
		autonomousCommand->Start();
		clearLCD->Start();
		resetSensors->Cancel();
	}
	
	virtual void AutonomousPeriodic() {
		driverStationLCDOutput->Run();
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		autonomousCommand->Cancel();
		resetSensors->Cancel();
	}
	
	virtual void TeleopPeriodic() {
		driverStationLCDOutput->Run();
		Scheduler::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(Team0322CommandBasedRobot2013);

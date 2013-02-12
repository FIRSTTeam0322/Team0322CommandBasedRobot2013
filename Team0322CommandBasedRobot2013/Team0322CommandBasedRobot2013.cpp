#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/ResetSensors.h"
#include "Commands/DriverStationLCDOutput.h"
#include "Commands/ClearLCD.h"
#include "Commands/AutonSelector.h"
#include "Commands/StartCompressor.h"

class Team0322CommandBasedRobot2013 : public IterativeRobot {
private:
	Command* autonomousCommand;
	Command* resetSensors;
	Command* driverStationLCDOutput;
	Command* clearLCD;
	Command* startCompressor;
	LiveWindow *lw;
	
	virtual void RobotInit() {
		CommandBase::init();
		autonomousCommand = new AutonSelector();
		resetSensors = new ResetSensors();
		driverStationLCDOutput = new DriverStationLCDOutput();
		clearLCD = new ClearLCD();
		startCompressor = new StartCompressor();
		lw = LiveWindow::GetInstance();
		
		resetSensors->SetRunWhenDisabled(true);
		driverStationLCDOutput->SetRunWhenDisabled(true);
		clearLCD->SetRunWhenDisabled(true);
		startCompressor->SetRunWhenDisabled(true);
	}
	
	virtual void DisabledInit() {
		clearLCD->Start();
		resetSensors->Start();
		startCompressor->Start();
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
		startCompressor->Start();
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
		startCompressor->Start();
	}
	
	virtual void TeleopPeriodic() {
		driverStationLCDOutput->Run();
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TestPeriodic() {
		lw->Run();
	}
};

START_ROBOT_CLASS(Team0322CommandBasedRobot2013);

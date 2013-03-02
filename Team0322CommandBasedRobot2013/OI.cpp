#include "OI.h"
#include "Commands/BrakeControl.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/LoadDisc.h"
#include "Commands/ShootDisc.h"
#include "Commands/ResetDiscLoader.h"
#include "Commands/ReverseShooter.h"
#include "Commands/FeedDisc.h"

OI::OI() {
	// Process operator interface input here.
	
	// Create the three Joystick objects
	driveStickLeft = new Joystick(1);
	driveStickRight = new Joystick(2);
	manipulatorStick = new Joystick(3, NUMAXIS, NUMBUTTONS);
	
	// Create the Brake SubSystem controls
	brake = new JoystickButton(driveStickLeft, 1);
	brake->WhileHeld(new BrakeControl());
	
	// Create the Drive System controls	
	precisionDriveButton = new JoystickButton(driveStickRight, 1);
	precisionDriveButton->WhileHeld(new PrecisionDrive());
	
	// Create the Feeder SybSystem controls
	runFeeder = new JoystickButton(manipulatorStick, 1);
	runFeeder->WhileHeld(new FeedDisc());
	
	// Create the Shooter SubSystem controls
	discLoader = new JoystickButton(manipulatorStick, 2);
	discLoader->WhenPressed(new LoadDisc());
	discLoader->WhenReleased(new ResetDiscLoader());
	
	discShooter = new JoystickButton(manipulatorStick, 3);
	discShooter->WhileHeld(new ShootDisc());
	
	shooterReverse = new JoystickButton(manipulatorStick, 4);
	shooterReverse->WhileHeld(new ReverseShooter());
}

Joystick* OI::getDriveStickLeft() {
	return driveStickLeft;
}

Joystick* OI::getDriveStickRight() {
	return driveStickRight;
}

Joystick* OI::getManipulatorStick() {
	return manipulatorStick;
}

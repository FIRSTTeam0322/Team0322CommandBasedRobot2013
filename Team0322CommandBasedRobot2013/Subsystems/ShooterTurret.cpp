#include "ShooterTurret.h"
#include "../Robotmap.h"

ShooterTurret::ShooterTurret() : Subsystem("ShooterTurret") {
	leftTurretMotor = new Victor(DIGITAL_MODULE_LEFT,3);
	rightTurretMotor = new Victor(DIGITAL_MODULE_LEFT,4);
}
    
void ShooterTurret::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new SpinTurret());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void ShooterTurret::spinTurret(Joystick *manipulatorStick) {
	leftTurretMotor->Set(manipulatorStick->GetAxis(1));
	rightTurretMotor->Set(-(manipulatorStick->GetAxis(1)));
}

#include "Shooter.h"
#include "../Robotmap.h"

Shooter::Shooter() : Subsystem("Shooter") {
	frontWheelMotor = new Victor(DIGITAL_MODULE_RIGHT, 3); 
	rearWheelMotor = new Victor(DIGITAL_MODULE_RIGHT, 4);
	discLoaderFire = new Solenoid(SOLENOID_MODULE, 1);
	discLoaderReset = new Solenoid(SOLENOID_MODULE, 2);
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Shooter::loadDisc() {
	discLoaderFire->Set(1);
	discLoaderReset->Set(0);
}

void Shooter::resetLoader() {
	discLoaderFire->Set(0);
	discLoaderReset->Set(1);
}

void Shooter::shootDisc() {
	frontWheelMotor->Set(-1.0);
	rearWheelMotor->Set(-1.0);
}

void Shooter::stopShooter() {
	frontWheelMotor->Set(0.0);
	rearWheelMotor->Set(0.0);
}

void Shooter::reverseShooter() {
	frontWheelMotor->Set(1.0);
	rearWheelMotor->Set(1.0);
}

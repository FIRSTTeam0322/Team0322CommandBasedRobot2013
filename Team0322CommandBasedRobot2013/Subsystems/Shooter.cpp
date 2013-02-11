#include "Shooter.h"
#include "../Robotmap.h"

Shooter::Shooter() : Subsystem("Shooter") {
	frontWheelMotor = new Victor(DIGITAL_MODULE_RIGHT,3); 
	rearWheelMotor = new Victor(DIGITAL_MODULE_RIGHT,4);
	discLoader = new Solenoid(RELAY_MODULE,2);
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Shooter::loadDisc() {
	discLoader->Set(1);
}

void Shooter::resetLoader() {
	discLoader->Set(0);
}

void Shooter::shootDisc() {
	frontWheelMotor->Set(1.0);
	rearWheelMotor->Set(1.0);
}

void Shooter::stopShooter() {
	frontWheelMotor->Set(0.0);
	rearWheelMotor->Set(0.0);
}

void Shooter::reverseShooter() {
	frontWheelMotor->Set(-1.0);
	rearWheelMotor->Set(-1.0);
}

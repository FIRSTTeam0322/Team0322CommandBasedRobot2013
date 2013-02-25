#include "Feeder.h"
#include "../Robotmap.h"

Feeder::Feeder() : Subsystem("Feeder") {
	discFeeder = new Victor(DIGITAL_MODULE_LEFT,3);
}
    
void Feeder::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Feeder::FeedDisc() {
	discFeeder->Set(1.0);
}

void Feeder::StopFeed() {
	discFeeder->Set(0.0);
}

#include "PneumaticControlSystem.h"
#include "../Robotmap.h"
#include "../Commands/StartCompressor.h"

PneumaticControlSystem::PneumaticControlSystem() : Subsystem("PneumaticControlSystem") {
	airSource = new Compressor(DIGITAL_MODULE_LEFT,5,DIGITAL_MODULE_LEFT,1);
}
    
void PneumaticControlSystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new StartCompressor());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void PneumaticControlSystem::startCompressor() {
	airSource->Start();
}

void PneumaticControlSystem::stopCompressor() {
	airSource->Stop();
}

#include "StopCompressor.h"

StopCompressor::StopCompressor() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(pneumaticControlSystem);
}

// Called just before this Command runs the first time
void StopCompressor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void StopCompressor::Execute() {
	pneumaticControlSystem->stopCompressor();
}

// Make this return true when this Command no longer needs to run execute()
bool StopCompressor::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StopCompressor::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopCompressor::Interrupted() {
}

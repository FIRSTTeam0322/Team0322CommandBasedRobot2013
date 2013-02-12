#include "StopShooter.h"

StopShooter::StopShooter() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void StopShooter::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void StopShooter::Execute() {
	shooter->stopShooter();
}

// Make this return true when this Command no longer needs to run execute()
bool StopShooter::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StopShooter::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopShooter::Interrupted() {
}

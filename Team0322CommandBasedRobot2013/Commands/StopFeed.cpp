#include "StopFeed.h"

StopFeed::StopFeed() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(feeder);
}

// Called just before this Command runs the first time
void StopFeed::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void StopFeed::Execute() {
	feeder->StopFeed();
}

// Make this return true when this Command no longer needs to run execute()
bool StopFeed::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StopFeed::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopFeed::Interrupted() {
}

#include "FeedDisc.h"

FeedDisc::FeedDisc() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(feeder);
}

// Called just before this Command runs the first time
void FeedDisc::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void FeedDisc::Execute() {
	feeder->FeedDisc();
}

// Make this return true when this Command no longer needs to run execute()
bool FeedDisc::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FeedDisc::End() {
	feeder->StopFeed();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FeedDisc::Interrupted() {
	End();
}

#include "LoadDisc.h"

LoadDisc::LoadDisc() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void LoadDisc::Initialize() {
	shooter->resetLoader();
}

// Called repeatedly when this Command is scheduled to run
void LoadDisc::Execute() {
	shooter->loadDisc();
}

// Make this return true when this Command no longer needs to run execute()
bool LoadDisc::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void LoadDisc::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LoadDisc::Interrupted() {
}

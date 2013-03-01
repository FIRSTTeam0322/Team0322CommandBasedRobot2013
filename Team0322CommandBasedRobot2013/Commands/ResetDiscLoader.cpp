#include "ResetDiscLoader.h"

ResetDiscLoader::ResetDiscLoader() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void ResetDiscLoader::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void ResetDiscLoader::Execute() {
	shooter->resetLoader();
}

// Make this return true when this Command no longer needs to run execute()
bool ResetDiscLoader::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ResetDiscLoader::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetDiscLoader::Interrupted() {
	End();
}

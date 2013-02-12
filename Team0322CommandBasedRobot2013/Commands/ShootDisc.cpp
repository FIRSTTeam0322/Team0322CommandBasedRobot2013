#include "ShootDisc.h"

ShootDisc::ShootDisc() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	requires(shooter);
}

// Called just before this Command runs the first time
void ShootDisc::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShootDisc::Execute() {
	shooter->shootDisc();
}

// Make this return true when this Command no longer needs to run execute()
bool ShootDisc::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootDisc::End() {
	shooter->resetLoader();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootDisc::Interrupted() {
	End();
}

#include "SpinTurret.h"

SpinTurret::SpinTurret() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooterTurret);
}

// Called just before this Command runs the first time
void SpinTurret::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void SpinTurret::Execute() {
	shooterTurret->spinTurret(oi->getManipulatorStick());
}

// Make this return true when this Command no longer needs to run execute()
bool SpinTurret::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SpinTurret::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SpinTurret::Interrupted() {
}

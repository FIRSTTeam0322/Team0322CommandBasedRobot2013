#ifndef SHOOTER_TURRET_H
#define SHOOTER_TURRET_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author CCRLH85
 */
class ShooterTurret: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *leftTurretMotor, *rightTurretMotor;
public:
	ShooterTurret();
	void InitDefaultCommand();
	void spinTurret(Joystick *manipulatorStick);
};

#endif

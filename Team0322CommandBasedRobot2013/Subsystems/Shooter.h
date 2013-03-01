#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author CCRLH85
 */
class Shooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *frontWheelMotor, *rearWheelMotor;
	Solenoid *discLoaderFire, *discLoaderReset;
public:
	Shooter();
	void InitDefaultCommand();
	void loadDisc();
	void shootDisc();
	void resetLoader();
	void stopShooter();
	void reverseShooter();
};

#endif

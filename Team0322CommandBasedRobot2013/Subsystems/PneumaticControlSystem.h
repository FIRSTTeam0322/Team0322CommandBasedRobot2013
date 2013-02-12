#ifndef PNEUMATIC_CONTROL_SYSTEM_H
#define PNEUMATIC_CONTROL_SYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author CCRLH85
 */
class PneumaticControlSystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Compressor *airSource;
public:
	PneumaticControlSystem();
	void InitDefaultCommand();
	void StartCompressor();
	void StopCompressor();
};

#endif

#ifndef FEEDER_H
#define FEEDER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author CCRLH85
 */
class Feeder: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *discFeeder;
public:
	Feeder();
	void InitDefaultCommand();
	void FeedDisc();
	void StopFeed();
};

#endif

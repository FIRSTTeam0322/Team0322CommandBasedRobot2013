#ifndef SPIN_TURRET_H
#define SPIN_TURRET_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class SpinTurret: public CommandBase {
public:
	SpinTurret();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

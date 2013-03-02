#ifndef SHOOT_DISC_H
#define SHOOT_DISC_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ShootDisc: public CommandBase {
public:
	ShootDisc();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

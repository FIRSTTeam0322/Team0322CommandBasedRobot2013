#ifndef REVERSE_SHOOTER_H
#define REVERSE_SHOOTER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ReverseShooter: public CommandBase {
public:
	ReverseShooter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

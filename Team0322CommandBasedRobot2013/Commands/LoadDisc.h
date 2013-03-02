#ifndef LOAD_DISC_H
#define LOAD_DISC_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class LoadDisc: public CommandBase {
public:
	LoadDisc();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

#ifndef RESET_DISC_LOADER_H
#define RESET_DISC_LOADER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ResetDiscLoader: public CommandBase {
public:
	ResetDiscLoader();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

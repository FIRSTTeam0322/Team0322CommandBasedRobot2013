#ifndef STOPFEED_H
#define STOPFEED_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class StopFeed: public CommandBase {
public:
	StopFeed();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

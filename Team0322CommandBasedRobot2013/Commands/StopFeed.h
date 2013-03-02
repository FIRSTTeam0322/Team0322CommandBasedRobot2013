#ifndef STOP_FEED_H
#define STOP_FEED_H

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

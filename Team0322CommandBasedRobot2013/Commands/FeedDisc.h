#ifndef FEEDDISC_H
#define FEEDDISC_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class FeedDisc: public CommandBase {
public:
	FeedDisc();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

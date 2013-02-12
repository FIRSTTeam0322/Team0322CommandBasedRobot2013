#ifndef STOPCOMPRESSOR_H
#define STOPCOMPRESSOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class StopCompressor: public CommandBase {
public:
	StopCompressor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

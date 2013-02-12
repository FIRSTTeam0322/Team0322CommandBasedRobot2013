#ifndef STARTCOMPRESSOR_H
#define STARTCOMPRESSOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class StartCompressor: public CommandBase {
public:
	StartCompressor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

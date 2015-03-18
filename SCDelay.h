#ifndef __SCDELAY_H__
#define __SCDELAY_H__

#include "SequenceCommon.h"
#include "ServoCommandBase.h"

class SCDelay : public ServoCommandBase {
private: 
  int delayInMilliseconds;
  
public:
  SCDelay(int delayInMillisecondsToUse);
  virtual void Run();
};

#endif

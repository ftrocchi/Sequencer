#ifndef __SCMOVETOPERCENT_H__
#define __SCMOVETOPERCENT_H__

#include "SequenceCommon.h"
#include "SCServo.h"

class SCMoveToPercent : public SCServo {
private:
  float percent;
  
public:
    SCMoveToPercent(ServoBoard::Value boardToUse, int servoToUse, float percentToUse);
    
    virtual void Run();
};

#endif

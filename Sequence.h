#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include "SequenceCommon.h"
#include "ServoCommandBase.h"
#include <memory>


class Sequence {
private:
  std::list<unique_ptr
public:
  Sequence();

  void AddServoCommmand(ServoCommandBase &servo);
  void RunSequence();
};

#endif

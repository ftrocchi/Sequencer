#include "Sequence.h"

Sequence::Sequence() {
}

void Sequence::AddServoCommmand(ServoCommandBase &servo) {
  servoCommands.push_back(servo);
}

void Sequence::RunSequence() {
//  for (SimpleList<int>::iterator i = servoCommands.begin(); i != servoCommands.end(); i++)
  {

//    i->Run();
  }
}

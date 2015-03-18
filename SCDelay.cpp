#include "SCDelay.h"

SCDelay::SCDelay(int delayInMillisecondsToUse) : ServoCommandBase(ServoCommand::Delay) {
  delayInMilliseconds = delayInMillisecondsToUse;
  SerialPrint("SCDelay|SCDelay|delayInMilliseconds set to: ");
  SerialPrintln(delayInMilliseconds);    
};

void SCDelay::Run() {
  SerialPrintln("SCDelay|Run|Run called!");  
}

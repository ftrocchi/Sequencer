#include "SCOpen.h"

SCOpen::SCOpen(ServoBoard::Value boardToUse, int servoToUse) : SCServo(ServoCommand::Open, boardToUse, servoToUse) {
}

void SCOpen::Run() {
  SerialPrintln("SCOpen|Run|Run called!");
}


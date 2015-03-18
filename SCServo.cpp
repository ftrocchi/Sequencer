#include "SCServo.h"

SCServo::SCServo(ServoCommand::Value commandToUse, ServoBoard::Value boardToUse, int servoToUse) : ServoCommandBase(commandToUse) {
  board = boardToUse;
  SerialPrint("SCServo|SCServo|board set to: ");
  SerialPrintln(board);
  
  boardI2CAddress = 0x40 + (ServoBoard::Value)board;
  SerialPrint("SCServo|SCServo|boardI2CAddress set to: ");
  SerialPrintln(boardI2CAddress);
  
  servo = servoToUse;
  SerialPrint("SCServo|SCServo|servo set to: ");
  SerialPrintln(servo);
}

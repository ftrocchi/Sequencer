#include "ServoCommandBase.h"

ServoCommandBase::ServoCommandBase(ServoBoard::Value boardToUse) {
  SerialPrintln("----------------------------------------");
  SerialPrintln("Parameters Passed:");
  SerialPrint("  Board To Use: ");
  SerialPrintln(boardToUse);
  
  board = boardToUse;
  SerialPrint("board set to: ");
  SerialPrintln(board);  
  
  boardI2CAddress = 0x40 + (ServoBoard::Value)board;
  SerialPrint("boardI2CAddress set to: ");
  SerialPrintln(boardI2CAddress);
}

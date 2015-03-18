#ifndef __SEQUENCECOMMON_H__
#define __SEQUENCECOMMON_H__

#define USE_SERIAL

#include "Arduino.h"

struct ServoBoard {
  enum Value {
    PrimaryDome = 0,
    SecondaryDome = 1,
    PrimaryBody = 2,
    SecondaryBody = 3,
  };
};

struct ServoCommand {
  enum Value {
    Close = 0,
    Open = 1,
    MoveToPercentage = 2,
    Delay = 3
  };
};

inline void SerialPrint(const char* msg) {
#ifdef USE_SERIAL
  Serial.print(msg);
#endif
}

inline void SerialPrintln(const char* msg) {
#ifdef USE_SERIAL
  Serial.println(msg);
#endif
}

inline void SerialPrint(int msg) {
#ifdef USE_SERIAL
  Serial.print(msg);
#endif
}

inline void SerialPrintln(int msg) {
#ifdef USE_SERIAL
  Serial.println(msg);
#endif
}
    
#endif

#include <iostream>
#include "debug.h"

void Debug::Log(std::string msg) {
  if(enabled) {
    std::cout << msg << std::endl;
  }
}
Debug::Debug() {
  SetEnabled(1);
}
void Debug::SetEnabled(int e) {
  enabled=e;
}

#include <iostream>
#include "debug.h"

void Debug::Log(std::string msg) {
  if(i_enabled) {
    std::cout << s_prefix << msg << std::endl;
  }
}
Debug::Debug() {
   SetEnabled(1);
   SetPrefix("DEBUG: ");
}
Debug::Debug(std::string prefix) {
   SetEnabled(1);
   SetPrefix(prefix);
}
void Debug::SetEnabled(int e) {
  i_enabled=e;
}
void Debug::SetPrefix(std::string prefix) {
   s_prefix=prefix;
}
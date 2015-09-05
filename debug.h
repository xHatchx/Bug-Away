#ifndef DEBUG_H
#define DEBUG_H
class Debug
{
private:
   int i_enabled;
   std::string s_prefix;

public:
   Debug();
   Debug(std::string prefix);
   void Log(std::string msg);
   void SetEnabled(int e);
   void SetPrefix(std::string prefix);
};
#endif

#ifndef DEBUG_H
#define DEBUG_H
class Debug
{
private:
    int enabled;

public:
    Debug();
    void Log(std::string msg);
    void SetEnabled(int e);
};
#endif

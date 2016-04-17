# Bug-Away
C++ Debugging Library
## Example
```C++
#include <iostream>
#include "debug.h"
Debug *d = new Debug("DEBUG: ");
int main(int argc, char* argv[]) {
    d->SetEnabled(0); // Disable debugging
    if(argv[1]!=nullptr) { // If the first argument after the filename isn't a null pointer
        if(strcmp(argv[1],"--debug")) { // If the first argument after the filename is "--debug"
            d->SetEnabled(1); //Enable debugging
        }
    }
    d->Log("Program started successfully");
    std::cout << "Hello, World!" << endl;
    return 0;
}
```
### Output
#### With ```--debug```
```
DEBUG: Program started sucessfully
Hello, World!
```
#### Without ```--debug```
```
Hello, World!
```

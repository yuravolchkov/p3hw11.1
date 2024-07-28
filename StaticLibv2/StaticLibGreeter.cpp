#include "StaticLibGreeter.h"
#include <iostream>

    void Greeter::Show_Greetings()
    {
        std::cout << "Здравствуйте, " << Greeting_Name << "!"<<std::endl;
    }

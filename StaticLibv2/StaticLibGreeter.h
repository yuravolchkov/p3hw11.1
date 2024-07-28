#pragma once
#include <iostream>

class Greeter
{
private:
    std::string Greeting_Name;

public:
    Greeter(std::string Entering_Name) : Greeting_Name(Entering_Name) {}

    void Show_Greetings();
};

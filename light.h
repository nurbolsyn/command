#pragma once

#include <iostream>
#include <string>

using namespace std;

class Light
{
private:
    string place;
public:
    Light(string place);
    void on();
    void off();
};
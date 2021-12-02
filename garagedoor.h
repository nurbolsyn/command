#pragma once

#include <iostream>
#include <string>

using namespace std;

class GarageDoor
{
private:
    string place;
public:
    GarageDoor(string place);
    void up();
    void down();
    void stop();
    void lightOn();
    void lightOff();
};
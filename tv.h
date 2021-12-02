#pragma once

#include <iostream>

using namespace std;

class TV
{
private:
    string place;
public:
    TV(string place);
    void on();
    void off();
    void setInputChannel();
};
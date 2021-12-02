#pragma once

#include <iostream>

using namespace std;

class Stereo
{
private:
    string place;
public:
    Stereo(string place);
    void on();
    void off();
    void setCd();
    void setDvd();
    void setRadio();
    void setVolume(int);
};
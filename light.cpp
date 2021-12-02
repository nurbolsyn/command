#include "light.h"

Light::Light(string place)
{
    this->place = place;
}

void Light::on() {
    cout << "Light is on" << endl;
}

void Light::off() {
    cout << "Light is off" << endl;
}
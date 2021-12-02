#pragma once

#include "light.h"
#include "command.h"

class LightOnCommand : public Command
{
private:
    Light* light;
public:
    LightOnCommand(Light* light);
    void execute();
};
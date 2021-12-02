#pragma once

#include "command.h"
#include "light.h"

class LightOffCommand : public Command
{
private:
    Light* light;
public:
    LightOffCommand(Light* light);
    void execute();
};
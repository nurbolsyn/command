#pragma once

#include "command.h"
#include "garagedoor.h"

class GarageDoorDownCommand : public Command
{
private:
    GarageDoor* garageDoor;
public:
    GarageDoorDownCommand(GarageDoor* garageDoor);
    void execute();
};
#pragma once

#include "command.h"
#include "garagedoor.h"

class GarageDoorUpCommand : public Command
{
private:
    GarageDoor* garageDoor;
public:
    GarageDoorUpCommand(GarageDoor* garageDoor);
    void execute();
};
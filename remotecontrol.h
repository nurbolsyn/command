#pragma once

#include "command.h"
#include "nocommand.h"

class RemoteControl
{
private:
    Command** onCommands;
    Command** offCommands;
public:
    RemoteControl();
    void setCommand(int slot, Command* onCommand, Command* offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    string toString();

};
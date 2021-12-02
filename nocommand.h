#pragma once

#include "command.h"

class NoCommand : public Command
{
public:
    NoCommand();
    void execute();
};
#pragma once

#include "command.h"
#include "stereo.h"

class StereOnWithCDCommand : public Command
{
private:
    Stereo* stereo;
public:
    StereOnWithCDCommand(Stereo* stereo);
    void execute();
};
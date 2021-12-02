#pragma once

#include "command.h"
#include "stereo.h"

class StereoOffCommand : public Command
{
private:
    Stereo* stereo;
public:
    StereoOffCommand(Stereo* stereo);
    void execute();
};
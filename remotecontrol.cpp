#include "remotecontrol.h"
#include <string>

using namespace std;

RemoteControl::RemoteControl()
{
    onCommands = new Command * [7];
    offCommands = new Command * [7];

    Command* noCommand = new NoCommand();
    for (int i = 0; i < 7; i++) {
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
}

void RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand) {
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
    onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
    offCommands[slot]->execute();
}

string RemoteControl::toString() {
    string text = "\n-------- Remote Control --------\n";
    for (int i = 0; i < 7; i++) {
        text += "[slot " + string::number(i) + "] " + onCommands[i]->metaObject()->className() + "\n\t";
        text += offCommands[i]->metaObject()->className();
        text += "\n";
    }
    return text;
}
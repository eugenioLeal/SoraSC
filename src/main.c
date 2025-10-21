#include <stdio.h>
#define INCLUDE_COMMANDS_LIBRARY_IMPLEMENTATION
#include "commands.h"

int main(int argc, char **argv) {
    Command current_command = commands_get_current_command(argc, argv);

    switch(current_command) {
        case COMMAND_INIT: {
            argc+=0;
        } break;
        case COMMAND_START: {
            argc+=0;
        } break;
        case COMMAND_SET_URL: {
            argc+=0;
        } break;
        case COMMAND_GET_URL: {
            argc+=0;
        } break;
        case COMMAND_SYNC: {
            argc+=0;
        } break;
        case COMMAND_DONE: {
            argc+=0;
        } break;
        case COMMAND_PUSH: {
            argc+=0;
        } break;
        case COMMAND_POP: {
            argc+=0;
        } break;
        case COMMAND_VERSION: {
            argc+=0;
        } break;
        case COMMAND_HELP: {
            argc+=0;
        } break;
        case COMMAND_NONE: {
            argc+=0;
        } break;
    }
    return 0;
}

#include <stdio.h>
#define INCLUDE_COMMANDS_LIBRARY_IMPLEMENTATION
#include "commands.h"

void sora_init(void) {
    printf("Initializing SoraSC repository...\n");
    // TODO: create .sorasc directory and index file
}

void sora_start(void) {
    printf("Start the day...");
}

void sora_push(const char *msg) {
    printf("Pushing changes: %s\n", msg);
    // TODO: detect changes, save to local stack
}

void sora_pop(void) {
    printf("Popping last change from stack...\n");
    // TODO: remove last change
}

void sora_done(void) {
    printf("Finalizing today's changes...\n");
    // TODO: finalize current stack entry
}

void sora_sync(const char *mode) {
    if (!mode) mode = "all";
    printf("Syncing changes (%s)...\n", mode);
    // TODO: pull from trusted/all team members
}

void sora_version(void) {
    printf("Local version: 0.1\n");
    printf("Server version: 0.1\n");
    // TODO: read version from metadata / server
}

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

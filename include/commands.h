#ifndef COMMANDS_H
#define COMMANDS_H

#include <string.h>

typedef enum {
    COMMAND_INIT,
    COMMAND_START,
    COMMAND_SET_URL,
    COMMAND_GET_URL,
    COMMAND_SYNC,
    COMMAND_DONE,
    COMMAND_PUSH,
    COMMAND_POP,
    COMMAND_VERSION,
    COMMAND_HELP,
    COMMAND_NONE,
} Command;


void commands_print_help(void);
Command commands_get_current_command(int argc, char **argv);

#ifdef INCLUDE_COMMANDS_LIBRARY_IMPLEMENTATION

void commands_print_help(void) {
    printf("SoraSC - simple source control for small teams\n");
    printf("Usage:\n");
    printf("  sorasc init                 Initialize Sora\n");
    printf("  sorasc start                Initialize Sora\n");
    printf("  sorasc done                 Finalize changes for the day\n");
    printf("  sorasc sync                 Pull changes from team members\n");
    printf("  sorasc push <msg>           Push changes to stack\n");
    printf("  sorasc pop                  Discard last change\n");
    printf("  sorasc version              Show local/server version\n");
    printf("  sorasc help                 Show this message\n");
}

Command commands_get_current_command(int argc, char **argv) {
    if (argc < 2) return COMMAND_NONE;

    if (strcmp(argv[1], "init") == 0) return COMMAND_INIT;
    if (strcmp(argv[1], "start") == 0) return COMMAND_INIT;
    if (strcmp(argv[1], "push") == 0) return COMMAND_PUSH;
    if (strcmp(argv[1], "pop") == 0) return COMMAND_POP;
    if (strcmp(argv[1], "done") == 0) return COMMAND_DONE;
    if (strcmp(argv[1], "sync") == 0) return COMMAND_SYNC;
    if (strcmp(argv[1], "version") == 0) return COMMAND_VERSION;
    if (strcmp(argv[1], "help") == 0) return COMMAND_HELP;

    return COMMAND_NONE;
}

#endif
#endif

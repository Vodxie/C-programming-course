#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void) 
    
DEFINE_COMMAND(quit, internal) {
    printf("internal quit command.\n");
}

DEFINE_COMMAND(start, external) {
    printf("external start command.\n");
}

void main() {
    COMMAND(quit, internal)();
    COMMAND(start, external)();
} 
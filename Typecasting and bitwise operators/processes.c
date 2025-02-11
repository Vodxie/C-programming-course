#include "processes.h"
#include <stdio.h>
#include <string.h>

Process processes[MAX_PROCESSES];
int processcount = 0;
static int nextprocessid() {
    static int nextid = 1; 
    if (nextid > 0 && nextid < 10000) {
        return nextid++;
    }
    return 0;
}

int createnewprocess(const char *name) {
    if (processcount >= MAX_PROCESSES) {
        return 0;
    }

    int id = nextprocessid();
    if (id == 0) {
        return 0;
    }

    processes[processcount].id = id;
    strncpy(processes[processcount].name, name, MAX_PROCESS_NAME);
    processes[processcount].name[MAX_PROCESS_NAME] = '\0'; 

    processcount++;
    return id;
}

void stopprocess(int id) {
    int found = -1;
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == id) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < processcount - 1; i++) {
            processes[i] = processes[i + 1];
        }
        processcount--;
    }
}
void listprocesses(void) {
    printf("\nList of processes:\n");
    if (processcount == 0) {
        printf("No active processes.\n");
    } else {
        for (int i = 0; i < processcount; i++) {
            printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
        }
    }
}

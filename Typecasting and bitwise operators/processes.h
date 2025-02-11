#ifndef PROCESSES_H_
#define PROCESSES_H_

#define MAX_PROCESSES 5
#define MAX_PROCESS_NAME 30

typedef struct {
    int id;
    char name[MAX_PROCESS_NAME + 1];
} Process;

extern Process processes[MAX_PROCESSES];
extern int processcount;

int createnewprocess(const char *name);
void stopprocess(int id);
void listprocesses();

#endif

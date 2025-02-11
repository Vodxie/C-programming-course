#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "processes.h"

void printmenu() {
    printf("\n1. Make a process\n");
    printf("2. Return a list with all processes\n");
    printf("3. Stop process\n");
    printf("4. Exit\n");
    printf("Select an option: ");
}

int main() {
    int choice;
    char processname[MAX_PROCESS_NAME + 1];
    int id;

    while (1) {
        printmenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice!\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter name of process: ");
                scanf("%30s", processname);
                id = createnewprocess(processname);
                if (id == 0) {
                    printf("Error. Reached max processes\n");
                } else {
                    printf("Made process under ID: %d\n", id);
                }
                break;

            case 2:
                listprocesses();
                break;

            case 3:
                printf("Enter the id of the process you want to stop: ");
                if (scanf("%d", &id) != 1) {
                    printf("Invalid entry!\n");
                    while (getchar() != '\n');
                    continue;
                }
                stopprocess(id);
                printf("Process under ID %d was stopped.\n", id);
                break;

            case 4:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

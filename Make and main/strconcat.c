#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

#define MAX_LENGTH 50

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Грешка: трябва да подадете два аргумента (два низа).\n");
        return 1;
    }
    
    char str1[MAX_LENGTH + 1]; 
    char *str2 = argv[2];


    snprintf(str1, MAX_LENGTH + 1, "%s", argv[1]);


    strconcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}

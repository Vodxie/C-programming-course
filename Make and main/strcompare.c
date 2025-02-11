#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Грешка: трябва да подадете два аргумента (два низа).\n");
        return 1;
    }
    
    char *str1 = argv[1];
    char *str2 = argv[2];

    printf("%d\n", strcompare(str1, str2));

    return 0;
}

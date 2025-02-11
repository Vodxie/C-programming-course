#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Грешка: трябва да подадете един аргумент (низ).\n");
        return 1;
    }
    char *str = argv[1];
    
    printf("%d\n", strlength(str));

    return 0;
}

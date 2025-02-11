#include <stdio.h>
#include "maths.h"

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    long result = factorial(num);
    if (result == -1) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d is %ld.\n", num, result);
    }

    return 0;
}

#include "safeint.h"
#include "util.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error("Usage: safemultiply <num1> <num2>");
        return 1;
    }

    SafeResult num1 = safestrtoint(argv[1]);
    SafeResult num2 = safestrtoint(argv[2]);

    if (num1.errorflag || num2.errorflag) {
        print_error("Invalid input or out of range.");
        return 1;
    }

    SafeResult result = safemultiply(num1.value, num2.value);
    if (result.errorflag) {
        print_error("Overflow or underflow occurred during multiplication.");
        return 1;
    }

    printf("Result: %d\n", result.value);
    return 0;
}

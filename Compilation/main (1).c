#include <stdio.h>
#include "transformation.h"

int main() {
    const char *testStrings[] = { "-123", "456", "12ab23" };
    int numTests = sizeof(testStrings) / sizeof(testStrings[0]);

    for (int i = 0; i < numTests; i++) {
        transformation result = string_to_long(testStrings[i]);
        if (result.error[0] == '\0') {
            printf("Input: %s => Result: %ld, Error: None\n", testStrings[i], result.result);
        } else {
            printf("Input: %s => Result: %ld, Error: %s\n", testStrings[i], result.result, result.error);
        }
    }

    return 0;
}

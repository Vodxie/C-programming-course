#include "transformation.h"
#include <stdlib.h>
#include <string.h>

transformation string_to_long(const char *str) {
    transformation result;
    char *endptr;

    result.result = strtol(str, &endptr, 10);

    if (*endptr != '\0') {
        result.result = 0;
        strncpy(result.error, "Invalid input string", sizeof(result.error) - 1);
        result.error[sizeof(result.error) - 1] = '\0';
    } else {
        result.error[0] = '\0';
    }

    return result;
}

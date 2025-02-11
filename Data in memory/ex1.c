#include <stdio.h>
#include <limits.h>
#include <stdint.h>

#define PRINT_INT_INFO(TYPE, FORMAT, UNSIGNED_FORMAT, MIN, MAX, UMAX) \
    printf("%-10s | %-10s | %-5zu | %-20lld | %-20lld | %-15s | %-20llu\n", \
           #TYPE, FORMAT, sizeof(TYPE), (long long)MIN, (long long)MAX, UNSIGNED_FORMAT, (unsigned long long)UMAX)

void main() {

    printf("%-10s | %-10s | %-5s | %-20s | %-20s | %-15s | %-20s\n",
           "Type", "Format", "Size", "Signed Min", "Signed Max", "Unsigned Format", "Unsigned Max");
   
    PRINT_INT_INFO(char, "%d", "%u", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    PRINT_INT_INFO(short, "%d", "%u", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    PRINT_INT_INFO(int, "%d", "%u", INT_MIN, INT_MAX, UINT_MAX);
    PRINT_INT_INFO(long, "%ld", "%lu", LONG_MIN, LONG_MAX, ULONG_MAX);
    PRINT_INT_INFO(long long, "%lld", "%llu", LLONG_MIN, LLONG_MAX, ULLONG_MAX);

}

#include <stdio.h>
int kratno(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int a = 12;
    int b = 18;
    int result = kratno(a, b);

    printf("Least common multiple: %d\n", result);

    return 0;
}

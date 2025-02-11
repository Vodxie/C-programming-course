#include <stdio.h>

#define SWAP(A, B, TYPE) \
    TYPE temp = A; \
    A = B; \
    B = temp;

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    for (int i = 0; i < SIZE - 1; i++) { \
        for (int j = i + 1; j < SIZE; j++) { \
            if (ARRAY[i] COMPARE ARRAY[j]) { \
                SWAP(ARRAY[i], ARRAY[j], TYPE); \
            } \
        } \
    }

void main() {
    char sort;
    int array[] = {4, 2, 9, 3, 6};
    int size = 5;

    printf("How to sort the array(>/<): ");
    scanf("%c", &sort);

    if (sort == '>') {
        SORT(array, size, int, >);
    } else{
        SORT(array, size, int, <);
    }
    printf("Sorted array:\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
#include <stdio.h>

#define DEBUG

void main() {
    int a[] = {5, 3, 8, 1, 2, 10, 4, 7, 6, 0};
    int size = sizeof(a) / sizeof(a[0]);

    sortAndCalculate(a, size);
}

void sortAndCalculate(int *a, int size) {
    int sum = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\nElements: ");
#endif

    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += a[i];

#ifdef DEBUG
            printf("%d ", a[i]);  
#endif
        }
    }

#ifdef DEBUG
    printf("\n");
#endif

    printf("Sum of elements: %d\n", sum);
}

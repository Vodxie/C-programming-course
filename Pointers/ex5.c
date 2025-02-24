#include <stdio.h>
#include <stdlib.h>

int compareasc(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

int comparedesc(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);
    if (int_a < int_b) return 1;
    if (int_a > int_b) return -1;
    return 0;
}

void swapelements(void *a, void *b) {
    int temp = *((int *)a);
    *((int *)a) = *((int *)b);
    *((int *)b) = temp;
}

void bubblesort(void *arr, size_t n, int (*compare)(const void *, const void *), void (*swapelements)(void *, void *)) {
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - 1 - i; j++) {
            if (compare((char *)arr + j * sizeof(int), (char *)arr + (j + 1) * sizeof(int)) > 0) {
                swapelements((char *)arr + j * sizeof(int), (char *)arr + (j + 1) * sizeof(int));
            }
        }
    }
}

void print_array(int *arr, size_t n) {
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    size_t n = sizeof(array) / sizeof(array[0]);

    printf("Ascending:\n");
    bubblesort(array, n, compareasc, swapelements);
    print_array(array, n);

    printf("Descending:\n");
    bubblesort(array, n, comparedesc, swapelements);
    print_array(array, n);

    return 0;
}

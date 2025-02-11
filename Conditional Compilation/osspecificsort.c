#include <stdio.h>

void bubble(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selection(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}

void insertion(int a[], int size) {
    for (int i = 1; i < size; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void reverse(int a[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

void osbasedsort(int a[], int size) {
    #ifdef _WIN32
        printf("Using Windows => bubble sort\n");
        bubble(a, size);
    #elif __linux__
        printf("Using Linux => selection sort\n");
        selection(a, size);
    #elif __APPLE__
        printf("Using macOS => insertion sort\n");
        insertion(a, size);
    #else
        printf("Reversing array\n");
        reverse(a, size);
    #endif
}

int main() {
    int a[] = {5, 7, 9, 1, 6, 3};
    int size = sizeof(a) / sizeof(a[0]);

    osbasedsort(a, size);

    printf("Result:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

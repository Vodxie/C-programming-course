#include <stdio.h>
#include <math.h> 

void raise_to_power(long *array, size_t size, int power) {
    for (size_t i = 0; i < size; i++) {
        array[i] = (long)pow(array[i], power); 
    }
}

void main() {
    size_t size;
    printf("Enter the number of elements in the array: ");
    scanf("%zu", &size);


    long array[size];

    printf("Enter %zu elements of the array:\n", size);
    for (size_t i = 0; i < size; i++) {
        printf("Element %zu: ", i + 1);
        scanf("%ld", &array[i]);
    }

    int power;
    printf("Enter the power to raise each element: ");
    scanf("%d", &power);

    raise_to_power(array, size, power);

    printf("Array after raising elements to the power of %d:\n", power);
    for (size_t i = 0; i < size; i++) {
        printf("%ld ", array[i]);
    }
    printf("\n");

 }

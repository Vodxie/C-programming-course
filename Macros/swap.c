#include <stdio.h>

#define SWAP(A, B, TYPE)do{\
    TYPE temp = A; \
        A = B; \
        B = temp; \
}while(0)
void main(){

int a;
int b;

printf("Enter a: ");
scanf("%d", &a);
printf("Enter b: ");
scanf("%d", &b);


printf("Before: a = %d, b = %d\n", a, b);
SWAP(a, b, int);
printf("After: a = %d, b = %d", a, b);
}
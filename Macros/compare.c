#include <stdio.h>

#define COMPARE(A, B) (A) > (B) ? A : B

void main(){
    int a;
    int b;
    printf("Enter the digits: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", COMPARE(a, b));
}
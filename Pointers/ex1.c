#include <stdio.h>

void main(){


    double a;
    double b;
    
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    double * p1 = &a;
    double * p2 = &b;

    printf("A address: %p\n", p1);
    printf("A value: %lf\n", *p1);
    printf("B address: %p\n", p2);
    printf("B value: %lf\n", *p2);




}
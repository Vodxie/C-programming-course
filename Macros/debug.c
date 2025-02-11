#include <stdio.h>

#define DEBUG(A) \ 
printf("%s\n", #A); \
printf("%d\n", A); \
printf("%s\n", __FILE__); \
printf("%d\n", __LINE__);

void main(){
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    DEBUG(a);
}
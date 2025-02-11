#include <stdio.h>

#define ARRAY_SIZE 10
#define NUMBER(A) (1<< (A))

void main(){

#if defined ARRAY_SIZE && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
    int a[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        a[i] = NUMBER(i);
        printf("%d\n", a[i]);
    }

#else 
    printf("Error");
#endif
}

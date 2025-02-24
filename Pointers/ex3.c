#include <stdio.h>

void swap(void *a, void *b){
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int main(){
    int a = 5;
    int b = 2;

    swap(&a, &b);
    printf("A: %d, B = %d\n", a, b);

    return 0;
}

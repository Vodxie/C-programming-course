#include <stdio.h>

int compareasc(const void *a, const void *b){
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    
    if (int_a > int_b) return 1;
    if (int_a < int_b) return -1;
    return 0;
}

int comparedesc(const void *a, const void *b){
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    
    if (int_a < int_b) return 1;
    if (int_a > int_b) return -1;
    return 0;
}

int main(){
   double a = 5, b = 2;

    printf("Compare Ascending: %d\n", compareasc(&a, &b));
    printf("Compare Descending: %d\n", comparedesc(&a, &b));

    return 0;
}

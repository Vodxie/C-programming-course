#include <stdio.h>

#define SIZE 5

void main(){
    int arr[SIZE] = {1, 2, 3, 4, 5};
    
    for(int i=0; i< SIZE; i++){
        printf("%d", arr[i]);
    }
}
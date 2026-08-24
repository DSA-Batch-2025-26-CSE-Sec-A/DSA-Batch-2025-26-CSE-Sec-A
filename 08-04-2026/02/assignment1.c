#include<stdio.h>

int main(){
    int temp;
    int array[] = {10, 28, 36, 56, 24, 41, 60, 57, 52};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j;

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is:\n");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
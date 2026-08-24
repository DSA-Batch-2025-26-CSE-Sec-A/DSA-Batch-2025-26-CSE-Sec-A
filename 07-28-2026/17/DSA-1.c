#include <stdio.h>

int main() {
    int array[100], n, i;
    int position;
    printf("Enter number of elements:\n ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    for(i = 0; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    n--;  

    printf("Array after deleting first element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\nEnter the position to delete : \n", n);
    scanf("%d", &position);

    if(position < 1 || position > n) {
        printf("Invalid position!");
        return 0;
    }

    
    for(i = position - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    n--;   

    printf("Array after deleting element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }


    return 0;
}

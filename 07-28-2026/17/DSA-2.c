#include <stdio.h>

int main() {
    int array[100], n, i;
     int position ;
    int element ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert : ", n + 1);
    scanf("%d", &position);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if(position < 1 || position > n + 1) {
        printf("Invalid position!");
        return 0;
    }

    
    for(i = n; i >= position; i--) {
        array[i] = array[i - 1];
    }


    array[position - 1] = element;

    n++;   

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

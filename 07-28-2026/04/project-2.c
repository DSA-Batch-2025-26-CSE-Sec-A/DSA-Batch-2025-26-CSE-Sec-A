# include <stdio.h>
int main() {
    int arr[100], i, n, pos, element;
    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position where you want to insert element: ");
    scanf("%d", &pos);
    printf("Enter element to be inserted: ");
    scanf("%d", &element);
    
    for(i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    
    arr[pos - 1] = element;
    n++;
    
    printf("Array after inserting element: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

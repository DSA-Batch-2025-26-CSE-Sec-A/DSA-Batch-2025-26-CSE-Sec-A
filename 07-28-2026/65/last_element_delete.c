#include <stdio.h>

int main() {
    int n;
    
    // 1. Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Check if the array is empty or invalid
    if (n <= 0) {
        printf("Array needs to have at least 1 element.\n");
        return 1; 
    }
    
    int arr[n];
    
    // 2. Get the array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 3. Delete the last element logically
    n--; 
    
    // 4. Print the updated array
    printf("\nArray after deleting the last element:\n");
    if (n == 0) {
        printf("The array is now empty.\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}
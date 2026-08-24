#include <stdio.h>

int main() {
    int arr[] = {5, 4, 3, 2, 7, 6};
    int n = 6;
    int key, i;
    int found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("%d found at index %d", key, i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("%d not found in the array", key);
    }

    return 0;
}

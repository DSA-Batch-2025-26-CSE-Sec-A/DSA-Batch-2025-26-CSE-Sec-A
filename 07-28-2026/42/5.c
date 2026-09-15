#include <stdio.h>

int main() {
    int n, f, flag = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter The Finding Element: ");
    scanf("%d", &f);

    for (int i = 0; i < n; i++) {
        if (f == arr[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("The Element Is Found");
    else
        printf("The Element Is Not Found");

    return 0;
}
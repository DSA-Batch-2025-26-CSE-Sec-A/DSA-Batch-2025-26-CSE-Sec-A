#include <stdio.h>

int main() {
    int n,a;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        a=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=a;
    }
    printf("the reverse array :");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

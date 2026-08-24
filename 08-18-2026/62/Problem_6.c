#include <stdio.h>
int binarySearch(int a[], int left, int right, int key)
{   if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (a[mid] == key)
        return mid;
    if (key < a[mid])
        return binarySearch(a, left, mid - 1, key);
    return binarySearch(a, mid + 1, right, key);
}
int main()
{
    int n, key;
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    printf("%d", binarySearch(a, 0, n - 1, key));
    return 0;
}
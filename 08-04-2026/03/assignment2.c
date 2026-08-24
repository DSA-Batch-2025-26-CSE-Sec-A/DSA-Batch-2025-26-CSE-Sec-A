#include <stdio.h>

int main()
{
    int temp;
    int array[] = {33, 1, 345, 50, 45, 29, 48, 5};
    int n = sizeof(array) / sizeof(array[0]);

    for(int i = 1; i < n; i++)
    {
        temp = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = temp;
    }

    printf("Sorted array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
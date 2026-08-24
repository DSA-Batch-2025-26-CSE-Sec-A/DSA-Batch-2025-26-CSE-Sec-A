#include <stdio.h>

int main()
{
    int a[100], stack[100];
    int n, i;
    int top = -1;
    int low, high, pivot, p;
    int j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Push initial range into stack */
    stack[++top] = 0;
    stack[++top] = n - 1;

    /* Quick Sort */
    while(top >= 0)
    {
        high = stack[top--];
        low = stack[top--];

        pivot = a[high];
        i = low - 1;

        /* Partition */
        for(j = low; j < high; j++)
        {
            if(a[j] < pivot)
            {
                i++;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        /* Place pivot at correct position */
        temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;

        p = i + 1;

        /* Push left part */
        if(p - 1 > low)
        {
            stack[++top] = low;
            stack[++top] = p - 1;
        }

        /* Push right part */
        if(p + 1 < high)
        {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
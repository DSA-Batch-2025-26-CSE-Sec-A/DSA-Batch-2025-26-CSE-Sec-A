#include <iostream>
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Quick Sort
    int low = 0, high = n - 1;

    while(low < high)
    {
        int pivot = a[high];
        int i = low - 1;

        for(int j = low; j < high; j++)
        {
            if(a[j] < pivot)
            {
                i++;

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        int temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;

        int p = i + 1;

        // Sort left and right parts
        // This simple version handles one partition at a time
        if(p - 1 > low)
            high = p - 1;
        else
            low = p + 1;
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
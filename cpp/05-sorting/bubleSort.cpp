#include <bits/stdc++.h>
#include "commonArrayUtilites.h"
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size - 1 - i; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {7, 9, 5, 1, 0, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);
    bubbleSort(arr, size);
    printArr(arr, size);

    return 0;
}
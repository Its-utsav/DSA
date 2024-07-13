#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) // O(n)
    {
        cout << arr[i] << " ";
    }
}

int maxInArray(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++) // O(n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minInArray(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++) // O(n)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

bool linerSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++) // O(n)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

void reverseTheArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2) // O(n)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int uniqueInArray(int arr[], int size)
{
    // ONLY ONE UNIQUE IN ARRAY
    // O(n^2) - two loops
    // brute Force

    /*
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count++;
            }
        }
        if (count == 1)
            return arr[i];
    }
    return -1;
    */

    // optimal solution

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i]; //  ans =  ans ^ arr[i];
    }
    return ans;
}

void pairSum(int arr[], int size, int total)
{
    int n[size - 1];
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == total)
            {
                n[k] = arr[i];
                n[k + 1] = arr[j];
                k += 2;
            }
        }
    }

    int sizeOfN = sizeof(n) / sizeof(n[0]);

    printArray(n, sizeOfN);
}

void sort01(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        while (arr[start] == 0)
        {
            start++;
        }

        while (arr[end] == 1)
        {
            end--;
        }

        if (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

void swap012(int arr[], int size)
{
    int start = 0, mid = 0, end = size - 1;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[start]);
            mid++;
            start++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[end]);
            mid++;
            end--;
        }
    }
}

bool binarySearch(int arr[], int size, int key)
// O(log n)
{
    int start = 0;
    int end = size;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else

        {
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // printArray(arr, size);

    // ------------------------ BASICS ------------
    // cout << " MAX = " << maxInArray(arr, size) << endl;
    // cout << " Min = " << minInArray(arr, size) << endl;
    // cout << "5 in array  = " << linerSearch(arr, size, 5) << endl;
    // reverseTheArray(arr, size);
    // swapAlternate(arr, size);
    // printArray(arr, size);

    // unique in array
    // int arr[] = {2, 2, 3, 1, 3};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout << "Unique In array = " << uniqueInArray(arr, size) << endl;

    // -----------------
    // int arr[] = {1, 2, 3, 4, 5};

    // pairSum(arr, size, 5);

    // sort 01
    // int arr[] = {0, 1, 0, 1, 1, 0};
    // output =  0,0,0,1,1,1;

    // int arr[] = {2, 1, 0, 0, 2, 1, 0};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // sort01(arr, size);
    // swap012(arr, size);
    // printArray(arr, size);

    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "3 in arr = " << binarySearch(arr, size, 3) << endl;
    return 0;
}
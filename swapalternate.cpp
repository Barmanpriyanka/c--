#include<iostream>
using namespace std;

void swap(int arr[], int size)
{
    // Adjust the loop condition to iterate over alternate elements
    for (int i = 0; i < size - 1; i = i + 2)
    {
        // Check if the next element is within the array bounds
        if (i + 1 < size)
        {
            // Swap alternate elements
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {34, 56, 78, 90, 23, 45};

    swap(arr, 6);
    printArray(arr, 6);
    return 0;
}

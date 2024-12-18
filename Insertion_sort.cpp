#include <iostream>
using namespace std;
void Insertion_sort(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            // swap(arr[j], key);
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
};
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
};
int main()
{
    int arr[] = {10, 5, 7, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    Insertion_sort(arr, size);
    printArray(arr, size);
    return 0;
}
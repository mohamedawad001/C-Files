#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int min;
    for(int i = 0; i < n-1; i++)
    {
        min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
                swap(arr[i], arr[min]);
            }
        }
    }
};
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};
int main()
{
    int arr[] = {110, 70, 90, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}
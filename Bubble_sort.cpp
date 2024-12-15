#include <iostream>
using namespace std;
int bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)  //  i => Iterations .
    {
        for(int j = 0; j < n-i-1; j++)  //  j => Number Of Elements .
        {
            if(arr[j] > arr[j+1])
            {
                // swap(arr[j], arr[j+1])
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print Array
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array Is Sorted Using Bubble Sort Algorism\n";
};
int main()
{
    int arr[] = {20, 45, 12, 7, 68, 200, 46};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}
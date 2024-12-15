#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int first, int last, int search)
{
    while(first <= last)
    {
        int middle = (first + last) / 2;
        if(arr[middle] == search)
        return middle;
        else if(arr[middle] > search)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return -1;
};
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout<<"Enter A Number: \t";
    cin>>num;

    int result = binarySearch(arr, n, 0, n-1, num);
    if (result == -1)
    {
        cout<<"The Number "<<num<<" Is Not Found";
    }
    else{
        cout<<"The Number "<<arr[result]<<" Is Found At Position "<<result<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        return -1;
    }
};

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);  
    int num;
    cout<<"Enter A Number: \t";
    cin>> num;
    int result = linearSearch(arr, n, num);
    if(result == -1)
    {
        cout<<"The Number: "<<num<<" Is Not Found\n";
    }
    else
    {
        cout<<"The Number: "<<arr[result]<<" At Position "<<result<<endl;
    }
    return 0;
}
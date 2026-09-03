#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    for(int i=0; i<n ;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
}
void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={20,30,19,45,1};

    int n=5;
    sort(arr, n);
    print_array(arr, n);
    return 0;
}
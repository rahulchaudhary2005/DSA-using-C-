#include<iostream>
using namespace std;
int selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_idx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx=j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
    return 0;
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
    int arr[]={20,10,3,40,11};
    int n=5;

    int result=selection_sort(arr, n);
    print_array(arr, n);
    cout<<endl;
    cout<<"THe original array is: ";
 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}
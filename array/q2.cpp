//swapping thr min and max element in an array
#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Please enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"please enter the number : ";
        cin>>arr[i];

    }

    //checking the minimum and maximum element from the array
    int min=arr[0], max=arr[0];
    int min_index=0, max_index=0;

    for(int i=0; i<n ; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            min_index=i;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
    }
    //swapping the minimum and maximum element
    swap(arr[min_index], arr[max_index]);

    //printing the array after swapping the minimum and maximum element
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
// wap to find th minimum number from the array


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;
    int arr[n];
    int index=0;

    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of index "<<i<<" : ";
        cin>>arr[i];

    }
    int min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
            
        }
    }
    cout<<"The minimum number from the array is : "<<min<<endl;
    cout<<"The index of the minimum number is : "<<index<<endl;
    return 0;
}
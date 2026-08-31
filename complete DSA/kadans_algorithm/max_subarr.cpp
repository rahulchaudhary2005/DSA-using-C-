#include <iostream>
using namespace std;

void max_sub_array(int arr[],int n)
{
    for(int st=0; st<n; st++)
    {
        for(int end=st; end<n; end++)
        {
            for(int i=st; i<=end; i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;


    int arr[100];
    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of the array : ";
        cin>>arr[i];
    }
    
    max_sub_array(arr,n);

    return 0;

}
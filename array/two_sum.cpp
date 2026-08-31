#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"lease enter the size of the array : ";
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of the array : ";
        cin>>arr[i];

    }
    // out array would be in  [1,2,3,4,5] and target would be 9
    int target;
    cout<<"Please enter thre target element fro the aray : ";
    cin>>target;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"the tagget is achived and the indexes are : "<<i<<" and "<<j<<endl;
                
            }
            break;
        }
    }

    return 0;

}

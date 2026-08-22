#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"please enter te size of the array : ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of the arrray : ";
        cin>>arr[i];
    }

    int target=9;
    
    //time complexity must be O(n) 
    int i=0;
    for(int i=0;i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"the target is achieved and the indexes are : "<<i<<" and "<<j<<endl;
                break;
            }
        }
    }
    return 0;
    //the time complecty calculation is 
    
}
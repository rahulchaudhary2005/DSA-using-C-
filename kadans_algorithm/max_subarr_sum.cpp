#include <iostream>
using namespace std;

void max_sum(int arr[],int n)
{
    int max_sum=INT16_MIN;
    for(int i=0; i<n; i++)
    {
        int curr_sum=0;
        for(int j=i ;j<n; j++)
        {
            curr_sum+=arr[j];
            if(curr_sum>max_sum) // here we are applyig a condition if your curr sum is greater that maax sum then max sum becomes curr sum and this will continues till te entire calculation of the sub arrays
            {
                max_sum=curr_sum;
            }
        }
    }
    cout<<"Maximum subarray sum is: "<<max_sum<<endl;
}

int main()
{
    int n;
    cout<<"please enter the size of a array: ";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cout<<"please enter the elements of te array : ";
        cin>>arr[i];
    }
    cout<<"Calculating the maximum sub array sum : "<<endl;

max_sum(arr,n);

    return 0;
}
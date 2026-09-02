#include<iostream>

using namespace std;

int binarySearch(int arr[], int st, int end, int k)
{
    if(st<=end)
    {
       int mid=st + (end-st)/2;
       if(k<arr[mid])
       {
        return binarySearch(arr,st,mid-1,k);
       }
       else if(k>arr[mid])
       {
        return binarySearch(arr,mid+1,end,k);
       }
       else{
        return mid;
       }

    }
    return -1;
}
int main()
{
    int arr[]={2,5,7,9,20};
    int k=20;
    int st=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;

    int result =binarySearch(arr,st,end,k);
    if(result!=-1)
    {
        cout<<"Element found at index "<<result;
    }
    else{
        cout<<"Element not found";
    }

    return 0;


}
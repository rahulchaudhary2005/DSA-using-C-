#include<iostream>
using namespace std;
void merge(vector<int>& arr,int st, int mid,int end)
{
    // Implementation for merging two sorted subarrays
    vector<int> temp;
    int i=st, j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx<temp.size(); idx++)
    {
        arr[st+idx]=temp[idx];
    }
}
void mergeSort(vector<int> &arr,int st,int end)
{
    if(st<end)
    {
        int mid=st+(end-st)/2;
        // for the left part of the arrray 
        mergeSort(arr,st,mid);

        //for the right part of the array 

        mergeSort(arr,mid+1,end);

        // now sort the array which we have divide in the saperate part 

        merge(arr,st,mid,end);

    }
   
    
}

int main()
{
    vector<int> arr={23,45,11,2,4,67,89,90,12};

    int n=arr.size()-1;

    mergeSort(arr,0,n);
    //print the merged array
    for(int i=0;i<arr.size();i++)   
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
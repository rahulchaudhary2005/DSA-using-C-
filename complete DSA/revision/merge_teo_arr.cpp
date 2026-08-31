#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the size of the array you want : ";
    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of this array : ";
        cin>>arr1[i];
    }

    int m;
    cout<<"Please enter the size of the second array : ";
    cin>>m;

    int arr2[m];
    for(int i=0; i<m; i++)
    {
        cout<<"Please enter the element of the array : ";
        cin>>arr2[i];
    }

    // sorting the first array using bubble sort
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                swap(arr1[j], arr1[j+1]);
            }
        }
    }

    // sorting the second array using bubble sort
    for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<m-i-1; j++)
        {
            if(arr2[j] > arr2[j+1])
            {
                swap(arr2[j], arr2[j+1]);
            }
        }
    }

    // merging the two sorted arrays
    int merged[n+m];
    int i=0, j=0, k=0;

    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    // copy remaining elements
    while(i<n)
    {
        merged[k++] = arr1[i++];
    }

    while(j<m)
    {
        merged[k++] = arr2[j++];
    }

    cout<<"The merged array is : ";

    for(int i=0; i<n+m; i++)
    {
        cout<<merged[i]<<" ";
    }

    return 0;
}
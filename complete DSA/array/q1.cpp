#include <iostream>
using namespace std;

//calcullating the sum of all the element of th aray 
void array_sum(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of all the element of the array is : "<<sum<<endl;
}

//calcullating the product of all the element of th aray 
void array_product(int arr[], int n)
{
    int product=1;
    for(int i=0; i<n; i++)
    {
        product=product*arr[i];
    }
    cout<<"The product of all the element of the array is : "<<product<<endl;
}

int main()
{
    int n;
    cout<<"Please enter the size of array that u want o ceate in the program : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Pleasee enter the element of index "<<i<<" : ";
        cin>>arr[i];
    }

    //calcuating the sum of all the element of the array
    array_sum(arr,n);

    array_product(arr,n);

    return 0;

}
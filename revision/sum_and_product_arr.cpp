#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th index of the array: ";
        cin >> arr[i];
    }

    // Calculating the sum of the array
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "The sum of all the elements in the array is: " << sum << endl;

    //calculating the product of tehe elements 
    int product=1;
    for(int i=0; i<n; i++)
    {
        product*=arr[i];
        
    }

    cout<<"The product of all the element of the array is : "<<product;


    return 0;
}
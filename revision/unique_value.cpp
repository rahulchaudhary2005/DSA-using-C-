#include <iostream>
using namespace std;

int unique(int arr[], int sz)
{
    int ans = 0;

    for (int i = 0; i < sz; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;

    cout << "Please enter the value of n: ";
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The unique number is: " << unique(arr, n);

    return 0;
}
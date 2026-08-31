#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the size of the array: ";
    cin >> n;

    int arr[10];

    for(int i = 0; i < n; i++)
    {
        cout << "please enter the element of the array : ";
        cin >> arr[i];
    }

    cout << "Calculating the maximum sub array sum : " << endl;

    int max_sum = INT_MIN;
    int curr_sum = 0;

    for(int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);

        if(curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    cout << "Maximum sub array sum is : " << max_sum << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void min_max_swap(vector<int> &arr, int sz)
{
    int max = INT_MIN;
    int min = INT_MAX;

    int maxIndex = -1;
    int minIndex = -1;

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    // Swap the actual array elements
    swap(arr[minIndex], arr[maxIndex]);

    // Print array
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    cout << "Please enter the size of array you want: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the array: ";
        cin >> arr[i];
    }

    min_max_swap(arr, n);

    return 0;
}
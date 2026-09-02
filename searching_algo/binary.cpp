#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int k = 6;

    int st = 0;

    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(k < arr[mid])
        {
            end = mid - 1;
        }
        else if(k > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            cout << "Element found at index " << mid;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}
#include <iostream>
using namespace std;


// Check whether it is possible to paint
// all boards using given number of painters
// when each painter can paint at most maxTime
bool isPossible(int arr[], int n, int painters, int maxTime)
{
    int painterCount = 1;
    int time = 0;

    for(int i = 0; i < n; i++)
    {
        // Give current board to current painter
        if(time + arr[i] <= maxTime)
        {
            time += arr[i];
        }
        else
        {
            // Current painter cannot take this board
            // Give it to a new painter
            painterCount++;

            time = arr[i];
        }
    }

    return painterCount <= painters;
}


int painterPartition(int arr[], int n, int painters)
{
    // If there are more painters than boards
    if(painters > n)
    {
        return -1;
    }


    // Minimum possible answer
    int low = 0;

    // Maximum possible answer
    int high = 0;


    // Find largest board and total painting time
    for(int i = 0; i < n; i++)
    {
        low = max(low, arr[i]);

        high += arr[i];
    }


    int answer = -1;


    // Binary Search
    while(low <= high)
    {
        int mid = low + (high - low) / 2;


        // Check whether mid is possible
        if(isPossible(arr, n, painters, mid))
        {
            answer = mid;

            // Try to find smaller maximum time
            high = mid - 1;
        }
        else
        {
            // mid is too small
            low = mid + 1;
        }
    }


    return answer;
}


int main()
{
    int arr[] = {10, 20, 30, 40};

    int n = sizeof(arr) / sizeof(arr[0]);

    int painters = 2;


    int answer = painterPartition(arr, n, painters);


    cout << "Minimum maximum time = " << answer << endl;


    return 0;
}
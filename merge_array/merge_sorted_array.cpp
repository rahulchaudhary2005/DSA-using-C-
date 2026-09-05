#include <iostream>

using namespace std;

int merge(int arr1[], int arr2[], int n1, int n2)
{
    int k = n1 + n2 - 1;
    int i = n1 - 1;
    int j = n2 - 1;

    while(i >= 0 && j >= 0)
    {
        if(arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
        }
        else
        {
            arr1[k] = arr2[j];
            j--;
        }

        k--;
    }

    // When the second array still has elements left
    while(j >= 0)
    {
        arr1[k] = arr2[j];
        j--;
        k--;
    }

    return 0;
}

void print_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[10] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};

    int n1 = 5;
    int n2 = 5;

    merge(arr1, arr2, n1, n2);

    print_array(arr1, n1 + n2);

    return 0;
}
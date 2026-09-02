#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int k = 7;

    int i = 0;
    int j = 4;

    vector<int> ans;

    while (i < j)
    {
        if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }

    cout << "The target indexes are: ";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
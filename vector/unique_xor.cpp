#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 1, 2, 3, 4,5};

    int ans = 0;

    for (int val : vec)
    {
        ans = ans ^ val;
    }

    cout << "The unique number is: " << ans << endl;

    return 0;
}
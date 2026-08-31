#include <iostream>
#include <vector>
using namespace std;

int majority_element(vector<int> nums, int sz)
{
    for (int val : nums)
    {
        int freq = 0;

        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }

        if (freq > sz / 2)
        {
            cout<<"the frequency is "<<freq;
            return (val);
        }
    }

    return -1;
}

int main()
{
    vector<int> num = {1, 2, 2, 1, 1, 1};

    int result = majority_element(num, num.size());

    cout << "Majority element is: " << result;

    return 0;
}
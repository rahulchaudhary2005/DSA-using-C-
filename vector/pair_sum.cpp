#include <iostream>
#include <vector>
using namespace std;

vector<int> calculate_pair_sum(vector<int> nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;

    vector<int> ans;

    while (i < j)
    {
        if (nums[i] + nums[j] > target)
        {
            j--;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {11, 12, 13, 14, 15};

    int k = 25;

    vector<int> result = calculate_pair_sum(nums, k);

    cout << "The target indexes are: ";

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
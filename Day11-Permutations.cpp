#include <iostream>
#include<vector>
using namespace std;

void solve(vector<vector<int>> &ans, vector<int> nums, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(ans, nums, index + 1);
        swap(nums[index], nums[j]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(ans, nums, index);
    return ans;
}

int main()
{
    /*
    vector<int> v = {1,2,3};
    vector<vector<int>> res = permute(v);
*/


    return 0;
}
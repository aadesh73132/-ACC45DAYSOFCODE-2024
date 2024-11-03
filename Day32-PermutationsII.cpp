#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

void solve(vector<vector<int>> &ans, vector<int> nums, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    unordered_set<int> s;
    for (int j = index; j < nums.size(); j++)
    {
        // checking duplicacy
        if (s.find(nums[j]) != s.end())
            continue;

        s.insert(nums[j]);

        swap(nums[index], nums[j]);
        solve(ans, nums, index + 1);
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(ans, nums, index);
    return ans;
}

int main()
{
    vector<int> v = {1,1,2};
    vector<vector<int>> res = permuteUnique(v);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout<<res[i][j]<<",";
        }
        cout<<" ";
        
    }
    


    return 0;
}
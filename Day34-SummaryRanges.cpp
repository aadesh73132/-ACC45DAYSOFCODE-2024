//leetcode - 228

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{

    vector<string> ans;
    int n = nums.size();

    if (n == 0)
    {
        return ans;
    }

    long long int start = nums[0];
    long long int end = nums[0];

    for (int i = 1; i < n; i++)
    {
        if ((long long int)nums[i] - end == 1)
        {
            end = nums[i];
        }

        else
        {
            string temp = to_string(start);
            if (start != end)
            {
                temp += +"->" + to_string(end);
            }
            ans.push_back(temp);
            start = nums[i];
            end = nums[i];
        }
    }

    string temp = to_string(start);
    if (start != end)
    {
        temp += +"->" + to_string(end);
    }
    ans.push_back(temp);

    return ans;
}

int main()
{
    vector<int> v = {0,1,2,4,5,7};
    vector<string> ans = summaryRanges(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<",";
    }
    

    return 0;
}
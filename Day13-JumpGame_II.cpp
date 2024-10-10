//leetcode jump game 2

#include <iostream>
#include<vector>
using namespace std;

int jump(vector<int> &nums)
{
    int jumps = 0;
    int currentJumpEnd = 0; // The end index of the current jump
    int maxReachable = 0;   // The farthest index that can be reached with the current jumps

    for (int i = 0; i < nums.size() - 1; i++)
    {
        maxReachable = max(maxReachable, i + nums[i]);

        if (i == currentJumpEnd)
        {
            jumps++;
            currentJumpEnd = maxReachable;
        }
    }

    return jumps;
}

int main()
{
    vector<int> v = {2,3,1,1,4};
    int ans = jump(v);

    cout<<"the minimum number of jumps to reach at the last element of array is :"<<ans<<endl;

    return 0;
}
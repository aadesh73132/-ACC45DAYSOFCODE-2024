#include <iostream>
#include<vector>
using namespace std;

bool canJump(vector<int> &nums)
{
    int final = 0;
    for (int i = 0; i <= final; i++)
    {
        final = max(final, nums[i] + i);
        if (final >= nums.size() - 1)
            return true;
    }
    return false;
}

int main()
{
    vector<int> v = {2,3,1,1,4};
    bool ans = canJump(v);
    cout<<ans<<endl;

    return 0;
}
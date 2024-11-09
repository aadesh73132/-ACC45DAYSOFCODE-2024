#include <iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

int main()
{
    vector<int> v={1,3,5,6};
    int target = 5;
    int ans = searchInsert(v,target);
    cout<<"the index of searching element is:"<<ans<<endl;

    return 0;
}
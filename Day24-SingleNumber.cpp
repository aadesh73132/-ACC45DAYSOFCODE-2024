// leetcode - 136

#include <iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    vector<int> v = {4,1,2,1,2};
    int result = singleNumber(v);
    cout<<"the number that is unique in the array is: "<<result<<endl;

    return 0;
}
// leetcode 31.Next permutatuin

#include <iostream>
#include<bits\stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void nextPermutation(vector<int> &nums)
{

    int index = -1;
    // Finding the first dip of the array

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }

    // If there is no dip in the array just reverse it

    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    // If the dip is found,
    // Now we have find the element that is greater and close to the value of index

    for (int i = nums.size() - 1; i > index; i--)
    {
        if (nums[i] > nums[index])
        {
            swap(nums[i], nums[index]);
            break;
        }
    }

    // Now after the value that is next than index it will be in increasing order from last
    // Reverse that particular array from ( index + 1 ) -> nums.size() - 1

    reverse(nums.begin() + index + 1, nums.end());
}

int main()
{
    vector<int> v={1,2,3};
    nextPermutation(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<",";
    }
    


    return 0;
}
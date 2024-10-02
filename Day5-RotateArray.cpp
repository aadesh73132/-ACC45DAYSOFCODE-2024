/*
//leetcode 
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    //creating an temporary vector of same size to avoid error
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        //now shifting by k in temp from nums for avoiding the copy 
        temp[(i + k) % n] = nums[i];
    }
    //once in temp all element are get moved by k position then copy it in the nums array 
    nums = temp;
}
int main()
{
    vector<int> v={1,2,3,4,5,6,7};
    int k;
    cin>>k;

    rotate(v,k);
    cout<<"array after rotating it by k position :"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
/*
1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up 
to target.You may assume that each input would have exactly one solution, and you may not use the same element 
twice.You can return the answer in any order.
*/

#include<iostream>
#include<vector>
using namespace std;


    vector<int> twoSum(vector<int>& nums, int target) {
                vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            int first = i;
            int j = i + 1;

            while(j < nums.size()){
                if(nums[first] + nums[j] == target){
                    ans.push_back(first);
                    ans.push_back(j);
                    return ans;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
        
    }

int main(){
    vector<int> v={2,7,11,15};
    int target = 9;

    vector<int> res = twoSum(v,target);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<",";
    }
    

return 0;
}
#include <iostream>
#include<vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int count = 0;
    int index = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[index++] = nums[i];
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> v = {0,1,2,2,3,0,4,2};
    int val = 2;

    int ans = removeElement(v,val);
    cout<<"elements with the value val are :"<<ans<<endl;

    cout<<"after removing the elements having value val the array becomes:"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}
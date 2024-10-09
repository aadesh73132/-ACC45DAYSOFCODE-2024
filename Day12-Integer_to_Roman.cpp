//leetcode 12 integertoRoman

#include <iostream>
#include<string>
#include<vector>
using namespace std;

string intToRoman(int num)
{
    string res = "";

    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < values.size(); i++)
    {
        while (num >= values[i])
        {
            num -= values[i];
            res += symbols[i];
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;

    string ans = intToRoman(n);
    cout<<ans;

    // for(int i=0;i<ans.length();i++){
    //     cout<<ans[i]<<" ";
    // }

    return 0;
}
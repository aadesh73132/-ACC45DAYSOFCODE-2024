#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string digit, string output, string mapping[], int index, vector<string> &ans)
{
    // base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, mapping, index + 1, ans);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
    {
        return ans;
    }

    string output = "";
    int index = 0;

    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, mapping, index, ans);

    return ans;
}

int main()
{
    string digits = "23";
    vector<string> result = letterCombinations(digits);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<",";
    }
    
     return 0;
}
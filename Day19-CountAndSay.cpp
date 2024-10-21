// leetcode 38

#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n)
{

    string ans = "";
    // base case
    if (n == 1)
    {
        return "1";
    }

    string temp = countAndSay(n - 1);

    int count = 1;
    int i;
    for (i = 1; i < temp.size(); i++)
    {
        if (temp[i] == temp[i - 1])
        {
            count++;
        }
        else
        {
            ans += to_string(count);
            ans += temp[i - 1];
            count = 1;
        }
    }

    ans += to_string(count);
    ans += temp[i - 1];

    return ans;
}

int main()
{
    int n ;
    cin>>n;
    string res = countAndSay(n);
    cout<<res;

    return 0;
}
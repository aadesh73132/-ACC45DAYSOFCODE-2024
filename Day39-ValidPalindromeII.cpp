#include <iostream>
using namespace std;

bool ispalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s.at(i) == s.at(j))
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
bool validPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s.at(i) == s.at(j))
        {
            i++;
            j--;
        }
        else
        {
            return ispalindrome(s, i + 1, j) || ispalindrome(s, i, j - 1);
        }
    }
    return true;
}

int main()
{
    string s = "abcd";
    bool ans = ispalindrome(s,0,s.length()-1);
    if(ans == 1){
        cout<< true;
    }
    else{
        cout<< false;
    }

    return 0;
}
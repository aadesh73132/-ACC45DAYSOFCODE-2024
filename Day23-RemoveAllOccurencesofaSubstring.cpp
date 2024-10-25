// leetcode 1910

#include <iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {

        /*work of the above statement written inside the while loop
s.find(part) returns the starting index of the first occurrence of part in s. If part is not found, s.find(part) will return string::npos (a large number representing "not found"), which would break the loop since it's greater than s.length().
        */
        s.erase(s.find(part), part.length());
        // this above erase function will delete the part from main string s
        // s.find(part) return the first index of part string in main string s
        // and part.length() gives the length of part string
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    string ans = removeOccurrences(s,part);

    cout<<"the string after removing all the substring from it :"<<ans<<endl;

    return 0;
}
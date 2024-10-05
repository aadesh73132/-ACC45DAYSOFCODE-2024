#include <iostream>
#include<string>
using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.size() < needle.size())
    {
        return -1;
    }

    for (int i = 0; i <= haystack.size() - needle.size(); i++)
    {
        if (haystack.substr(i, needle.size()) == needle)
        {
            return i;
        }
    }
    return -1;
}

//approach 2
/*
   int strStr(string haystack, string needle) {        
        if (haystack.find(needle) != string::npos)
            return haystack.find(needle);
        else
            return -1; 
            }
*/
int main()
{

    return 0;
}
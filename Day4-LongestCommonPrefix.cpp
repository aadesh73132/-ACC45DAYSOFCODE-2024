#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) 
{
        if(strs.empty()){
            return "";
        }

        string prefix = strs[0];//starts with the first string as the initialprefix
        
        for(int i=1 ; i<strs.size() ; i++){
            int j=0;
            //compare character of prefix and the current string
            while(j<prefix.size() && j<strs[i].size() && prefix[j] == strs[i][j]){
                j++;
            }
            //update the prefix to be the matched part
            prefix = prefix.substr(0,j);
            //if the prefix is empty , break early
            if(prefix.empty()){
                return "";
            }
        }

        return prefix;
        
}

int main()
{

    vector<string> v = {"flower","flow","flight"};
    string ans = longestCommonPrefix(v);
    cout<<" the longest common prefix in strings is :"<<ans<<endl;

return 0;
}
// leetcode - 64

#include <iostream>
#include<vector>
using namespace std;

int minPathSum(vector<vector<int>> &v)
{
    int a = v.size();
    int b = v[0].size();
    for (int i = 1; i < b; i++)
    {
        v[0][i] += v[0][i - 1];
    }
    for (int i = 1; i < a; i++)
    {
        v[i][0] += v[i - 1][0];
    }
    for (int i = 1; i < a; i++)
    {
        for (int j = 1; j < b; j++)
        {
            int c = v[i - 1][j], d = v[i][j - 1];
            v[i][j] += min(c, d);
        }
    }

    return v[a - 1][b - 1];
}

int main()
{
    vector<vector<int>> v={{1,3,1},{1,5,1},{4,2,1}};
    int minsumpath = minPathSum(v);
    cout<<minsumpath<<endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> result;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }

        result.push_back(row);
    }

    return result;
}

int main()
{
    int numRows;
    cin>>numRows;

    vector<vector<int>> ans = generate(numRows);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<",";
        }
        
    }
    

    return 0;
}
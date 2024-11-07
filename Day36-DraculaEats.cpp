#include <bits/stdc++.h>
using namespace std;

int countTuesdays(int N)
{
    if (N < 2)
    {
        return 0;
    }
    else
    {
        return 1 + (N - 2) / 7;
    }
}

int main()
{
    int T;
    cin >> T; // Read the number of test cases

    while (T--)
    {
        int N;
        cin >> N;                         // Read each test case
        cout << countTuesdays(N) << endl; // Output the result for each test case
    }

    return 0;
}
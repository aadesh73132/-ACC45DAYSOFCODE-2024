#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, X, P;
        cin >> N >> X >> P;

        int y = N - X;

        int ans = 3 * X + (-1) * y;

        if (ans >= P)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }

    return 0;
}

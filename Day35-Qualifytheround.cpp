#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int X, A, B;
        cin >> X >> A >> B;

        if (A * 1 + B * 2 >= X)
        {
            cout << "Qualify" << endl;
        }
        else
        {
            cout << "NotQualify" << endl;
        }
    }

    return 0;
}

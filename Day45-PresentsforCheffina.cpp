#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N; // No of gift in the shop
        cin >> N;

        cout << (N % 5) + (N / 5) * 4 << endl;
    }

    return 0;
}
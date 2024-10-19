// leetcode 50

#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;

    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binform = n;
    // if my n is -ve then make the x=1/x and make n +ve then do power
    if (n < 0)
    {
        x = 1 / x;
        binform = -binform; // making n +ve as n is stored in binform
    }

    double ans = 1;

    while (binform > 0)
    {
        if (binform % 2 == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        binform = binform / 2;
    }
    return ans;
}

int main()
{
    int n = 10;
    int x = 2;

    double res = myPow(x,n);
    cout<<"the pow(x,n) is:"<<res<<endl;

    return 0;
}

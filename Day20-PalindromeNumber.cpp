// leetcode 9

#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    long long ans = 0;
    long long temp = x; // changr the name of x to temp to solve the question
    // bcz if we solve the ques by taking x our x will get changed after the end of while loop
    // and the condition that is written after  while loop ans == x is get false always.
    while (temp != 0)
    {
        int l = temp % 10;
        ans = ans * 10 + l;
        temp = temp / 10;
    }

    if (ans == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    cin>>x;

    bool res = isPalindrome(x);

    if(res==1){
        cout<<"number is palindrome:"<<endl;
    }
    else{
        cout<<"number is not palindrome:"<<endl;
    }

    return 0;
}
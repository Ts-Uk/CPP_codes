#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, rev = 0;
    cin >> n;
    int main = n;
    for (; n != 0; n = n / 10)
    {
        long long digit = n % 10;
        rev = rev * 10 + digit;
    }
    if (main == rev)
    {
        cout << "pelindrome number";
    }
    else
    {
        cout << "not palindrome number";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "Enter how many numbers you want to add ";
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += ara[i];
    }
   cout << "The sum of the array is " << sum;
    return 0;
}
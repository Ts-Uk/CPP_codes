#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many numbers you want to add ";
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    cout << "The numbers are ";
    for (int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }
    cout << "\n";
    int max = ara[0];
    for (int i = 0; i < n; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
    }
    int sec_max = ara[0];
    for (int i = 0; i < n; i++)
    { 


    cout << "The largest number is " << max << "\n";
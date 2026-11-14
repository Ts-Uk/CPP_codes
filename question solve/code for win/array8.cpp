#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many numbers you want to add ";
    cin >> n;
    int ara[n], ara2[n];
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
    cout << "The copied numbers are ";
    for (int i = 0; i < n; i++)
    {
        ara2[i] = ara[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << ara2[i] << " ";
    }
    return 0;
}
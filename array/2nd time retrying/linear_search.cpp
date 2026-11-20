#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key;
    cin >> n;
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == arra[i])
        {
            cout << i;
        }
    }

    return 0;
}
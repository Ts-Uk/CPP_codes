#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arra[5] = {1, 2, 3, 4, 5}, temp = 0;
    int n = sizeof(arra) / sizeof(int);
    for (int i = 0, j = n - 1; i < n/2; i++, j--)
    {
        temp = arra[j];
        arra[j] = arra[i];
        arra[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arra[i];
    }

    return 0;
}
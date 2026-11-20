#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> input[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}
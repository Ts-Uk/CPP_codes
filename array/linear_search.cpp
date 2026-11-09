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
    int key;
    cout << "enter the number you want to find" << endl;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == ara[i])
        {
            cout << "index :" << i;
            break;
        }
    }
    return 0;
}
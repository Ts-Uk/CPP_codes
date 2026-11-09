#include <bits/stdc++.h>
using namespace std;
int main()
{
    // without extra space two pointer approch
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
    int temp;
    int start = 0, end = n - 1;
    while (start < end)
    {
        temp = ara[start];
        ara[start] = ara[end];
        ara[end] = temp;
        start++;
        end--;
    }
    cout << "The reverse order is ";
    for (int i = 0; i < n; i++)
    {

        cout << ara[i] << " ";
    }

    return 0;
}
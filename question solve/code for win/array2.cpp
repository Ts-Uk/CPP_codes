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
    cout << "The numbers negetive are ";
    for (int i = 0; i < n; i++)
    {
        if (ara[i]<0){
        cout << ara[i] << " ";
        }
    }
    cout << "\n";
    return 0;
}
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
    int odd = 0 , even = 0;
    for (int i = 0; i < n ; i++){
        if (ara[i] % 2 == 0 ){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "total even numbers: " << even << "\n";
    cout << "total odd numbers:" << odd << "\n";
    return 0;

}
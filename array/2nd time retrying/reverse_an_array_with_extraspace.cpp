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
    int reverse[n];
    for (int i = 0 , j = n-1; i < n;i++,j-- ){
        reverse[i] = arra[j];
    }
    for(int i =0 ; i < n; i++){
        cout << reverse[i] << " ";
    }
}
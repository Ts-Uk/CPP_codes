#include <bits/stdc++.h>
using namespace std;
void printara(int ara[],int n){
    cout << "The numbers are ";
    for (int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }
    cout << "\n";
}
int main (){    
    int n;
    cout << "Enter how many numbers you want to add ";
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    } 
    printara(ara,n);
    return 0;
}
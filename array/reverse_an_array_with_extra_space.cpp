#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout <<"Enter how many numbers you want to add ";
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
    int copyara[n];
    for(int i = 0;i <n ;i++){
        int j = n-i-1;
        copyara[i]=ara[j];
    }
    for(int i = 0;i <n ;i++){
        
        ara[i]=copyara[i];
    }
    cout << "The reverse order is ";
     for(int i = 0;i <n ;i++){
        
        cout << ara[i]<< " ";
    }
    return 0;
}
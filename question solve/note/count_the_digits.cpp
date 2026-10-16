#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n,count = 0;
    cin >> n;
    for (;n!=0;n=n/10){
        count++;
    }
    cout << count;

    return 0;
}
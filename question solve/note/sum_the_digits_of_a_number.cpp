#include <bits/stdc++.h>
using namespace std;
int main (){

    long long n , sum = 0;
    cin >> n ;
    for (;n != 0; n = n/ 10){
        long long digit = n % 10;
        sum += digit;
    }
    cout << sum ;

    return 0;
}
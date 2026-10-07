#include <iostream>
using namespace std;
int main (){
    int n ,digit =0,reverse =0 ;
    cin >> n;
    for (;n !=0 ; n = n/10){
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }
    cout << reverse;
    return 0;
}
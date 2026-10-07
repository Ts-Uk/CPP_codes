#include<iostream>
using namespace std;
int main(){
    int n ,sum = 0,digit = 0;
    cin >> n;
    for (;n!=0;n=n/10){
        digit = n % 10;
        sum += digit;
    }
    cout << sum;
}
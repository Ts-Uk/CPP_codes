#include <iostream>
using namespace std;
float sum(float a , float b){ // a and b are perameters
    float sum = a+b;
    return sum; 
}
int main (){
    float a , b;
    cin >> a >> b;
    cout << sum (a,b); // a , b arguments

    
    return 0;
}
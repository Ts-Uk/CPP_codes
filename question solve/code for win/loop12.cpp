#include <iostream>
using namespace std;
int main()
{ int n ;
    cin >> n;
    int first,last, digit = 0 , reverse = 0;
    last = n % 10;
    
     for (;n !=0 ; n = n/10){
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }
    first = reverse % 10;
    cout << "First digit: " << first << endl;
    cout << "last digit: " << last <<endl;
    cout << "sum of first digit and last digit = " << first + last;
    return 0;
}
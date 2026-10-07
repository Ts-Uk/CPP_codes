#include <iostream>
using namespace std;
int main (){
    int a , count = 0;
    cout << "Input num: ";
    cin >> a;
    for (int i = 1 ; a!= 0; a = a/10){
        count++;
    }
    cout << "Number of digits: " << count;

}
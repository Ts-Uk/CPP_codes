#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 12;
    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr << endl;
    int y = 10;
    ptr = &y;
    cout << ptr << endl;
    cout << *ptr << endl;
}
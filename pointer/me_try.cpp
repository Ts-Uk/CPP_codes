#include <bits/stdc++.h>
using namespace std;
int main (){
    int a = 10;
    int *ptr = &a;
    cout << ptr << "\n" << &a << endl;
    cout << *ptr ;
    int **ptr2 = &ptr;



    return 0;
}
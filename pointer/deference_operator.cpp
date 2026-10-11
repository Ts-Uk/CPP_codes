#include <bits/stdc++.h>
using namespace std;
int main (){
//deference operator
/* *operator lets us directly access & modify the value of variabale */
int a = 10;
int *ptr = &a;
cout << &a << "\n";
cout << *(&a) << "\n";
*ptr = 20;
cout << a;


    return 0;
}
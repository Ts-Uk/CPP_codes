//address of operator
//& operator gives us the address of a variable
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a = 10;
    cout << &a << endl;
    //A special veriable that stores address of another variable
    //int *ptr = &a;
    //float *ptr = &b;
    //char *ptr = &c;
    //int** ptr2 = &ptr;
    int *ptr = &a;
    int **pptr = &ptr;
    cout << ptr << endl; 
    cout << *ptr <<endl; // dereference pointer
    cout << sizeof(ptr) << endl; 
    cout << &ptr <<endl; 
    cout << &*ptr <<endl;
    cout << pptr << endl;
    return 0;
}
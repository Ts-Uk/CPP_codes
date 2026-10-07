#include <iostream>
using namespace std;
// Functions

// Block of code which runs when it is called.

// returnType fName ( ) {
//     //do some work
//     return someValue; //optional
// }

// fName( );    //function call
void hello(){
    cout << "hello world" << endl;
}
void assitant(){
    hello();
    cout << "work done";
}
int  main (){
    assitant();
    return 0;
}
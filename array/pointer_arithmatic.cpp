#include <bits/stdc++.h>
using namespace std;
void printarra(int *ptr , int n){
    for (int i = 0 ; i < n ; i++){
        // cout << *ptr << endl;
        // ptr = ptr + 1;
        cout << *(ptr+i) << endl;

    }
}
int main(){
    int a = 10;
    int *aptr = &a;
    cout << aptr << endl; //Before 1 int ++
    aptr++;
    cout << aptr << endl;// after 1 int ++
    aptr--;
    cout << aptr << endl;// after 1 int --
    aptr = aptr+3;
    cout << aptr << endl;
    aptr = aptr-3;
    cout << aptr << endl;
    int arra[]={1,2,3,4,5};
    int n = sizeof(arra)/sizeof(int);
    printarra(arra,n);
    return 0;
}
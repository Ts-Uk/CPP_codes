#include <bits/stdc++.h>
using namespace std;
void func(int ara[]){
    ara[0]=1000;
}
void func2(int *ptr){
    *(ptr+1)=2000;
}
void func3(int *ptr){
    ptr[2]=3000;
}
int main (){
    int ara[]={1,2,3,4,5};
    cout << ara << endl;
    cout << *ara << endl;
    cout << *(ara+1) << endl;
    func(ara);
    func2(ara);
    func3(ara);
    cout << ara[0] << endl;
    cout << ara[1] << endl;
    cout << ara[2] << endl;
    return 0;
}
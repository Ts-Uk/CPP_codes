#include<bits/stdc++.h>
using namespace std;
int main(){
    int arra[5] = {1,2,3,4,5};
    int n = sizeof(arra)/sizeof(int);
    for (int i = 0 ; i < n ; i++){
            cout << arra[i] << " " ;
        for (int j = i ; j < n ; j ++){
            cout << arra[j] << " ";
        }
        cout << endl;
    }


    return 0;
}
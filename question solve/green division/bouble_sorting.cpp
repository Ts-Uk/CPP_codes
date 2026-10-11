#include <bits/stdc++.h>
using namespace std;
int main (){
    int arra [5];
    for (int i = 0 ; i < 5 ; i++){
        cin >> arra[i];
    }
    int temp = arra[0];
   
    for (int i = 0; i < 5 ; i++ ){
        for (int j = i+1 ; j < 5 ; j++){
            if(arra[i]>arra[j]){
                temp = arra[i];
                arra[i]= arra [j];
                arra[j] = temp;
                 
            }
        }
        
    }
    for (int i = 0; i < 5 ; i++ ){
        cout << arra[i];
    }
    return 0;
}

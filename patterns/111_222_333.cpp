// #include <iostream>
// using namespace std;
// // outter loop = number of rows (asssumtion)
// // inner loop = number of colums or row er moddhe ki print hobe and koto bar print hobe
// //  what is the work of inner loop : inner loop amader bole je every row teh amader ki kaj hosse
// int main()
// {
//     int n ;
//     cin >> n;
//     // outter loop
//     for (int i = 0; i < n; i++)
//     { // inner loop
//         for (int j = 0; j < n; j++)
//         {
//             cout << i + 1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin >> n;
    for (int i = 1 ; i <= n; i++){
        for (int j = 1 ; j <= n;j++ ){
            cout << i ;
        }
        cout << endl;
    }
    return 0;
}
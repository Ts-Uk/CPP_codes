// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n ;
//     cin >> n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout << "* ";
//         }
//         cout << "\n";
//     }


//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n ;
//     cin >> n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = n ; j >= i ; j--){
//             cout << "* ";
//         }
//         cout << "\n";
//     }


//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     for (int i = 1 ; i <=n ; i++){
//         for (int j = 1 ; j <= i;j++){
//             cout << j ;
//         }
//         cout << "\n";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char ch = 'A';
//     for (int i = 1; i <= 4;i++ ){
//         for (int j = 1 ; j <= i ; j++){
//             cout << ch;
//             ch++;
//         }
//         cout << "\n";
//     }


//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    for (int i = 1; i <= 4 ; i++){
        for (char ch = 'A'; ch < 'A'+i;ch++){
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
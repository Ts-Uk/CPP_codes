// #include <iostream>
// using namespace std; 
// int main (){
//     for (int i = 1 ; i <= 10; i++){
//         cout << "hello world " << i << endl;
//     }
//     return 0 ;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 0; i <n;i++){
//         cout << i+1 << " ";
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cin >> n;
    for (int i = 1 ;i <= n; i++){
        sum += i;
    }
    cout << sum ;
    return 0;
}
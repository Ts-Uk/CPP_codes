// #include <iostream>
// using namespace std;
// int prod (int a, int b){
//     return a*b;
// }
// int main (){
//     int x,y;
//     cin >> x >> y;
//     cout << prod (x,y) << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void odd_or_even(int a){
//     if (a % 2 == 0){
//         cout << "even";
//     }
//     else{
//         cout << "odd";
//     }
// }
// int main (){
//     int x;
//      cin >> x;
//    odd_or_even(x);
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

string odd_or_even(int a){
    if (a % 2 == 0){
        return "even";
    }
    return "odd";
}

int main(){
    int x;
    cin >> x;
    cout << odd_or_even(x) << endl;
    return 0;
}
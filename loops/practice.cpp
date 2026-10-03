// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     for (int i = 0; i < n;i++){
//         cout << "****" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     for (int i = n; i > 0 ; i-- ){
//         cout << i ;
//     }

//     return 0;

// }
#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    while (n != 0)
    {
        long long digit;
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << sum;

    return 0;
}
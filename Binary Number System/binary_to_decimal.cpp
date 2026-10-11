// #include <iostream>
// using namespace std;
// int main (){
//     int bin_num , last = 0,pow =1,dec_num = 0;
//     cin >> bin_num;
//     while (bin_num > 0)
//     {   last = bin_num % 10;
//         bin_num = bin_num /10;
//         dec_num += pow * last;
//         pow *= 2;

//     }
//     cout << dec_num;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bin_num, n = 0, last_dig = 0, pow = 1, dec_num = 0; // 2^0 , pow * 2 = 2^1 ,2^2
    cin >> bin_num;
    n = bin_num;
    for (; n > 0; n = n / 10)
    {
        last_dig = n % 10;
        dec_num += last_dig * pow;
        pow *= 2;
    }
    cout << dec_num;
    return 0;
}
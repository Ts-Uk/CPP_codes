// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char ch[] = "code";
//     int n = strlen(ch);
//     int srt = 0, end = n - 1;
//     while (srt < end)
//     {
//         swap(ch[srt], ch[end]);
//         srt++;
//         end--;
//     }
//     cout << ch;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[100] = "code" , temp;
    int n = strlen(ch) ;
    for (int i = 0,j = n-1 ; i < n/2 ; i++ , j-- ){
        temp = ch[j];
        ch[j] = ch[i];
        ch[i] = temp;
    }
    cout << ch;

    return 0;
}
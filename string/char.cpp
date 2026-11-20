#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch1 = 'a';
    char ch12 = 'A';
    cout << ch1  << endl << ch12 << endl;
    cout << (int) ch1 << endl << (int) ch12 << endl;
    char str[5]= {'a', 'b','c'};
    cout << str << endl;
    char str2[]="hello world";
    cout << str2 << endl;
    cout << strlen(str2) << endl;
    int len = strlen(str);
    cout << len << endl;
    char word[10] ;
    cin >> word;
    cout << "your word was: " << word << endl;
    char sentence[100];
    cin.getline(sentence,100);
    cout << sentence;
    int a = 100;
    (char)a;
    cout << a;
    

    return 0;
} 
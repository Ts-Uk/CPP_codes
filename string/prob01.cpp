// #include <bits/stdc++.h>
// using namespace std;
// void toupper(char word[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char ch = word[i];
//         if (ch >= 'A' && ch <= 'Z')
//         {
//             continue;
//         }
//         else
//         {
//             word[i] = ch - 'a' + 'A';
//         }
//     }
// }
// int main()
// {
//     char word[] = "ApPle";
//     int n = strlen(word);
//     toupper(word, n);
//     cout << word;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void lowercase(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}
int main()
{
    char word[] = "ApPle";
    int n = strlen(word);
    lowercase(word, n);
    cout << word;

    return 0;
}

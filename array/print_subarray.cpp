// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arra[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arra) / sizeof(int);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arra[i] << " ";
//         for (int j = i; j < n; j++)
//         {

//             cout << arra[j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void subarray(int *arra, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arra[i] << " ";
        for (int j = i; j < 5; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arra[i];
            }
            cout << ",";
        }
        cout << "\n";
    }
}
int main()
{
    int arra[] = {1, 2, 3, 4, 5};
    int n = sizeof(arra) / sizeof(int);
    subarray(arra, n);
    return 0;
}
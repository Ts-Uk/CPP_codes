#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 18)
    {
        cout << "you are over 18 \n"
             << "your age is " << a;
    }
    else
    {
        cout << "you are not over 18 \n"
             << "your age is " << a;
    }
    return 0;
}
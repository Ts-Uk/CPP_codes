#include <iostream>
using namespace std;

int main()
{
    cout << "Alphabets: ";

    char ch = 'a';
    while (ch <= 'z')
    {
        cout << ch;
        if (ch != 'z')
        {
            cout << ", ";
        }
        ch++;
    }

    return 0;
}
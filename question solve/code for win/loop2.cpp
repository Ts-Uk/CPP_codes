#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input N: ";
    cin >> n;

    cout << "Natural numbers from " << n << "-1 in reverse:" << endl;

    int i = n;
    while (i > 0)
    {
        cout << i;
        if (i != 1)
        {
            cout << ", ";
        }
        i--;
    }

    return 0;
}
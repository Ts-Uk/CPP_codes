#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input upper limit: ";
    cin >> n;

    cout << "Natural numbers from 1 to " << n << ": ";

    int i = 0;
    while (i < n)
    {
        cout << i + 1;
        if (i != n - 1)
        {
            cout << ", ";
        }
        i++;
    }

    return 0;
}
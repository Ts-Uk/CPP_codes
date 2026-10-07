#include <iostream>
using namespace std;
int main()
{
    cout << "Input upper range: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i;
            if (i != n)
            {
                cout << ", ";
            }
            
        }
        i++;
    }

    return 0;
}
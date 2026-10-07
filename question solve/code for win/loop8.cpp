#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Input upper limit of odd number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Sum of even numbers between 1 to " << n << ": " << sum;

    return 0;
}
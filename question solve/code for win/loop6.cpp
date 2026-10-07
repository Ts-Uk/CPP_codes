#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Input upper limit: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of natural numbers 1-10: " << sum;

    return 0;
}
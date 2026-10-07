#include <iostream>
using namespace std;

int main()
{
    int n, temp, power = 1;
    int first, last, middle, result;

    cout << "Input any number: ";
    cin >> n;

    // Single digit: nothing to swap
    if (n < 10)
    {
        cout << "Number after swapping first and last digit: " << n;
        return 0;
    }

    // Find power = 10^(digits-1), e.g. 12345 -> 10000
    temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = n / power;              // 12345 / 10000 = 1
    last = n % 10;                  // 12345 % 10 = 5
    middle = (n % power) / 10;      // 2345 / 10 = 234

    result = last * power + middle * 10 + first;

    cout << "Number after swapping first and last digit: " << result;

    return 0;
}
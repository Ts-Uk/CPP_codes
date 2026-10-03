#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "enter the value of num1" << endl;
    cin >> a;
    cout << "enter the operator" << endl;
    cin >> op;
    cout << "enter the value of the num2" << endl;
    cin >> b;
    switch (op)
    {
    case '+':
        cout << "the value of " << a << " " << op << " " << b << " " << "=" << " " << a + b << endl;
        break;
    case '-':
        cout << "the value of " << a << " " << op << " " << b << " " << "=" << " " << a - b << endl;
        break;
    case '*':
        cout << "the value of " << a << " " << op << " " << b << " " << "=" << " " << a * b << endl;
        break;
    case '/':
        cout << "the value of " << a << " " << op << " " << b << " " << "=" << " " << a / b << endl;
        break;

    default:
        cout << "invalid operation";
        break;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello world";
    cout << "\n****\n";
    cout << "***\n";
    cout << "**\n";
    cout << "*\n";
    cout << "size of int is " << sizeof(int) << endl;
    int age;
    cout << "enter your age" << endl
         << "Thanks" << endl;
    cin >> age;
    cout << "enter your age " << age << endl
         << "Thanks" << endl;
    int a, b;
    cin >> a >> b ;
    cout << "the sum is " << a+b << endl << "the diffrence is " << a-b <<endl;

    return 0;
}
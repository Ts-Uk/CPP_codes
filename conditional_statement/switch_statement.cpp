#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "enter your day" << endl;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "sunday";
        break;
    case 2:
        cout << "monday";
        break;
        //you can add more switch case like this 
    default:
        cout << "invlide date";
        break;
    }

    return 0;
}
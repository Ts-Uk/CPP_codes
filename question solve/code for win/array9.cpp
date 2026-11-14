#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many numbers you want to add ";
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    cout << "The numbers are ";
    for (int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }
    cout << "\n";
    int input_element, index;
    cout << "enter the number you want to input";
    cin >> input_element;
    cout << "enter index number";
    cin >> index;
    for (int i = 0; i < n; i++)
    {
        if (i == index)
        {
            ara[i] = input_element;
        }
    }
    cout << "The numbers are ";
    for (int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }
    cout << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arra[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arra) / sizeof(int);
    int target;
    cout << "enter your target between these numbers 2,4,6,8,10,12,14,16: ";
    cin >> target;
    int st = 0, ed = n - 1;
    for (; st <= ed;)
    {
        int mid = (st + ed) / 2;
        if (arra[mid] == target)
        {
            cout << "index: " << mid;
            return 0;
        }
        else if (arra[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            ed = mid - 1;
        }
    }
    cout << "element not found" << "\n";

    return 0;
}
#include <iostream>
using namespace std;
// outter loop = number of rows (asssumtion)
// inner loop = number of colums or row er moddhe ki print hobe and koto bar print hobe
//  what is the work of inner loop : inner loop amader bole je every row teh amader ki kaj hosse
int main()
{
    int i; // outter loop
    for ( i = 0; i < 4; i++)
    { // inner loop
        
        for (int j = 0; j < 4; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}

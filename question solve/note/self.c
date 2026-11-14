#include <stdio.h>

int main()
{
    long long n, sec;
    printf("Enter number:");
    scanf("%lld", &n);
    n = n / 10;
    sec = n % 10;
    printf("Second Last Digit=%lld\n", sec);
    if (sec % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
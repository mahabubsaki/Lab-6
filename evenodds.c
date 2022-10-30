#include <stdio.h>
int main()
{
    long long int total, position, odds;
    scanf("%lld%lld", &total, &position);
    if (total % 2 == 0)
    {
        odds = total / 2;
    }
    else
    {
        odds = (total / 2) + 1;
    }
    if (position > odds)
    {
        printf("%lld", (position - odds) * 2);
    }
    else
    {
        printf("%lld", (position * 2) - 1);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int step;
    scanf("%d", &step);
    int extra = 0;
    if (step % 5 != 0)
    {
        extra++;
    }
    printf("%d", (step / 5) + extra);
    return 0;
}
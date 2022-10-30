#include <stdio.h>
int main()
{
    int friends_number, fence_height, i, box;
    int result = 0;
    scanf("%d%d", &friends_number, &fence_height);
    for (i = 1; i <= friends_number; i++)
    {
        scanf("%d", &box);
        if (box > fence_height)
        {
            result += 2;
        }
        else
        {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}
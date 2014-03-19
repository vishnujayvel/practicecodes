#include <stdio.h>

int solve(int *curr, int i, int n)
{
    int c = 0;
    if (n == 0)
        return 1;
    if (i < 0)
        return 0;
    do {
        c += solve(curr, i - 1, n);
    } while ((n -= curr[i]) >= 0);
    return c;
}

int main()
{
    int curr[] = {1, 3, 10, 20, 50, 200};
    printf("%d\n", solve(curr, 5, 400));
    return 0;
}

#include <stdio.h>

int powR(int m, int n)
{
    if (n <= 0)
        return 1;
    return powR(m, n - 1) * m;
}

int powI(int m, int n)
{
    int r = 1;
    for (int i = 0; i < n; i++)
    {
        r *= m;
    }
    return r;
}

int powF(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
    {
        return powF(m * m, n / 2);
    }
    else
    {
        return m * powF(m * m, (n - 1) / 2);
    }
}

int powFI(int m, int n)
{
    int result = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            result *= m;
        }
        n /= 2;
        m *= m;
    }
    return result;
}

void main()
{
    int m = 2, n = 4;
    int r = powFI(m, n);
    printf("%d\n", r);
}
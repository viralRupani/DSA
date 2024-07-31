#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return factorial(n - 1) * n;
}

int findNcr(int n, int r)
{
    if (n == 0 || n == r)
        return 1;

    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);

    return num / den;
}

int NCRR(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    return NCRR(n - 1, r - 1) + NCRR(n - 1, r);
}

int main()
{
    int n = 5;
    int r = 2;
    printf("%d", NCRR(n, r));
    return 0;
}
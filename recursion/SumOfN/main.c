#include <stdio.h>

int sumUsingRecursion(int n)
{
    if (n == 0)
        return 0;
    return sumUsingRecursion(n - 1) + n;
}

int sumUsingIterative(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int sumUsingFormula(int n) { return n * (n + 1) / 2; }

void main()
{
    int n = 10;
    int sum = sumUsingRecursion(n);
    printf("%d\n", sum);
}
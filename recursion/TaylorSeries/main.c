#include <stdio.h>

double findE(int m, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n <= 0)
    {
        return 1;
    }
    r = findE(m, n - 1);
    p = p * m;
    f = f * n;
    return r + p / f;
}

double findELoop(double m, double n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + m / n * s;
    }
    return s;
}

double findEBRec(double m, double n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    s = 1 + (m / n) * s;
    return findEBRec(m, n - 1);
}

int main()
{
    double answer = findELoop(1, 20);
    printf("%lf", answer);
    return 0;
}
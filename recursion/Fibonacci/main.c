#include <stdio.h>
#include <stdlib.h>

int fibonacciR(int n)
{
    if (n <= 1)
        return n;
    return fibonacciR(n - 2) + fibonacciR(n - 1);
}

int array[10];
int fibonacciR2(int n)
{
    if (n <= 1)
    {
        array[n] = n;
        return n;
    }
    else
    {
        if (array[n - 2] == -1)
            array[n - 2] = fibonacciR2(n - 2);

        if (array[n - 1] == -1)
            array[n - 1] = fibonacciR2(n - 1);

        array[n] = array[n - 2] + array[n - 1];
        return array[n - 2] + array[n - 1];
    }
}

int main()
{
    for (int i = 0; i < (sizeof(array) / sizeof(int)); i++)
    {
        array[i] = -1;
    }

    int fibo = 10;
    printf("%d", fibonacciR2(fibo));
    return 0;
}
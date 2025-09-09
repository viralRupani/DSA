#include <iostream>
using namespace std;

int findFibonacci(int n, int arr[])
{

    if (n <= 1)
    {
        arr[n] = n;
        return n;
    }

    if (arr[n-1] != -1)
    {
        return n;
    }
    else
    {
        arr[n - 1] = findFibonacci(n - 1, arr);
        arr[n - 2] = findFibonacci(n - 2, arr);
        return arr[n - 2] + arr[n - 1];
    }

    delete[] arr;
}

int main()
{
    int v = 5;
    int arr[v];
    for (int i = 0; i < v; i++)
    {
        arr[i] = -1;
    }
    int a = findFibonacci(v, arr);
    cout << a;
    return 0;
}
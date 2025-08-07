#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n < 1) {
        return 1;
    }
    return factorialRecursive(n - 1) * n;
}

int factorialIterative(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main () {
    int r = factorialIterative(-1);
    printf("%d", r);
    return 0;
}
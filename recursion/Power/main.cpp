#include <iostream>

using namespace std;

int PowerRecursion(int m, int n) {
    if (n <= 1)
        return m;

    if (n % 2 == 0)
        return PowerRecursion(m * m, n /2);
    else
        return m * PowerRecursion(m * m, (n - 1) / 2);
}

int PowerIterative(int m, int n) {
    int result = 1;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= m;
        }
        m *= m;
        n /= 2;
    }

    return result;
}


int main() {
    printf("%d", PowerIterative(2,2));
    return 0;
}
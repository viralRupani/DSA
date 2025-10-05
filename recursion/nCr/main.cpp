#include <iostream>
using namespace std;

// nCr = n! / (r! * (n-r)!)



int fact(int n) {
    if (n<=0) {
        return 1;
    }

    return n*fact(n-1);
}

int findNcrRec(int n, int r) {
    return fact(n) / (fact(r) * fact(n-r));
}

int main() {

    int n = findNcrRec(6, 3);
    printf("%d", n);

    return 0;
}
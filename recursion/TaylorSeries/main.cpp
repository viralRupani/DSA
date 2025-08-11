#include <iostream>

using namespace std;

double tailorSeriesRecursive(int e, int x) {
    static double p=1, f=1;
    double r ;
    if (x == 0) {
        return 1;
    } else {
        r = tailorSeriesRecursive(e, x - 1);
        p *= e;
        f *= x;
        return r + (p / f);
    }
}

int main() {
    double result = tailorSeriesRecursive(4, 10);
    printf("%lf", result);
    return 0;
}
// Tailor Series:  1 + x/1! + x^2/2! + x^3/3! + x^4/4!
// Optimized version: 1 + x/1 [ 1 + x/2 [ 1 + x/3 [ 1 + x/4 [1] ] ] ]

#include <iostream>
using namespace std;

double optimizedTailorSeriesIterative(double e, double x) {
    double s = 1;

    for (;x > 0; x--) {
        s = 1 + ((e / x) * s);
    }

    return s;
}

double optimizedTailorRecursive(double e, double x) {
    static double s = 1;

    if (x == 0) {
        return s;
    }

    s = 1 + ((e/x) * s);
    return optimizedTailorRecursive(e, x - 1);
}


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
    double result = optimizedTailorSeriesIterative(1, 10);
    printf("%lf", result);
    return 0;
}
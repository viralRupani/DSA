#include <iostream>
using namespace std;
int main()
{
    int A[5];
    // int B[5] = {1, 2, 3, 4, 5};
    // int C[10] = {2, 4, 6};
    // int D[5] = {0};
    // int E[] = {1, 2, 3, 4, 5, 6};
    printf("%d", 1);
    printf("%lu\n\n", sizeof(A[0]));
    for (int i = 0; i < sizeof(A)/sizeof(int); i++) {
        printf("%d\n", &A[i]);
    }
    return 0;
}
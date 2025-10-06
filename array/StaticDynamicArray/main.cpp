#include <iostream>
using namespace std;

int main() {
   int *p = (int *)malloc(5 * sizeof(int));
   p[0] = 1;
   p[1] = 10;
   p[2] = 33;

   int *q = (int *)malloc(10 * sizeof(int));

   for (int i = 0; i < 5; i++)
        q[i] = p[i];

   free(p);
   p = q;
   q = NULL;

   printf("%d", p[2]);
}
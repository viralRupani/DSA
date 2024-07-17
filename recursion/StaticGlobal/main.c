#include <stdio.h>

int fun(int n)
{
	static int x;
	if (n > 0)
	{
		x++;
		return fun(n - 1) + x;
	}
	return 0;
}

int main()
{
	int r = fun(5);
	printf("%d", r);
	return 0;
}

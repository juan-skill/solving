#include <iostream>

using namespace std;

void update(int *, int *);
int absDifference(int);

int main(void)
{
	int a = 0, b = 0;
	int *pa = NULL, *pb = NULL;
	int tc = 0;

	scanf("%d", &tc);

	pa = &a;
	pb = &b;

	while (tc--)
	{
		scanf("%d %d", &a, &b);
		update(pa, pb);
		printf("%d\n%d\n", a, b);
	}



	return (0);
}

void update(int *a, int *b)
{
	*a = *a + *b;
	*b = absDifference(*a - 2 * *b);
}

int absDifference(int a)
{
	// printf("Hello %d\n", a);
	return a > 0 ? a : -a;
}

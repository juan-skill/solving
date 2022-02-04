#include <iostream>


using namespace std;

void update(int *, int *);


int main(void)
{
	int a = 0, b = 0;
	int *pa = NULL, *pb = NULL;
	int tc = 0;

	pa = &a;
	pb = &b;

	scanf("%d", &tc);

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
	int sum = *a + *b;
	int absDifference = *a - *b > 0 ? *a - *b : *b - *a;

	*a = sum;
	*b = absDifference;
}

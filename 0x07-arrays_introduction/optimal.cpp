#include <iostream>

using namespace std;


int main(void)
{
	int n = 0, i = 0;
	int *a = NULL;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> n;

		a = new int[n];

		i = 0;
		while (i < n)
			cin >> a[i++];

		while (n)
			cout << a[--n] << " ";

		cout << "\n";

		delete[] a;
	}

	return (0);
}

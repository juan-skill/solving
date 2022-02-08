#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a, b;
	char aPrime, bPrime;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> a >> b;

		cout << a.length() << " " << b.length() << "\n";
		cout << a + b << "\n";

		aPrime = a[0];
		bPrime = b[0];

		a[0] = bPrime;
		b[0] = aPrime;

		cout << a << " " << b << "\n";
	}

	return 0;
}

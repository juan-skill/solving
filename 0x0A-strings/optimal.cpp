#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string a, b;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> a >> b;

		cout << a.length() << " " << b.length() << "\n";
		cout << a + b << "\n";

		swap(a[0], b[0]);
		cout << a  << " " << b << "\n";
	}


	return 0;
}

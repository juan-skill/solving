#include <iostream>

using namespace std;


int main(void)
{
	string c[] = {
		"",
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine"
	};
	int a = 0, b = 0;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> a >> b;

		for (int i = a; i <= b; ++i)
			cout << ((i <= 9) ? c[i] : ((i % 2 == 0) ? "even" : "odd")) << "\n";
	}

	return (0);
}

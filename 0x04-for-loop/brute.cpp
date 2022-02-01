#include <iostream>

using namespace std;

int main(void)
{
	int a = 0, b = 0;
	string representation[10] = {
		"zero",
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
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> a >> b;

		for (int i = a; i <= b; ++i)
		{
			if (i > 9) {
				if (i % 2 == 0) {
					cout << "even" << "\n";
				} else {
					cout << "odd" << "\n";
				}
			} else {
				cout << representation[i] << "\n";
			}
		}
	}

	return (0);
}

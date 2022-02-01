#include <iostream>

using namespace std;

int main(void)
{
	long long in = 0;
	int tc = 0;
	string num[10] = {
		"Greater than 9",
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

	cin >> tc;

	while (tc--)
	{
		cin >> in;
	
		if (in > 9)
			cout << num[0] << "\n";
		else
			cout << num[in] << "\n";
	
	}

	return (0);
}

#include <iostream>

using namespace std;


int main(void)
{
	int i = 0, sum = 0;
	int tc = 0, count = 0;

	cin >> tc;

	while (tc--)
	{
		sum = 0, count = 1;
		while (cin >> i)
		{
			sum += i;

			if (count == 3)
				break;

			count++;
		}
			

		cout << sum << "\n";
	}

	return (0);
}

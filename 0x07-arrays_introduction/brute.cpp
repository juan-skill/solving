#include <iostream>

using namespace std;

int main(void)
{
	int n = 0;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> n;

		int array[n];

		for (int i = 0; i < n; i++)
		{
			cin >> array[i];
		}

		for (int i = n - 1; i >= 0; i--)
		{
			cout << array[i] << " ";

		}

		cout << "\n";
	}

	return (0);
}

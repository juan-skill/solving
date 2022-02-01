#include <iostream>

using namespace std;

int max_of_four(int, int, int, int);


int main(void)
{
	int a, b, c, d, result;

	a = b = c = d = result = 0;

	int tc;

	cin >> tc;

	while (tc--)
	{
		cin >> a >> b >> c >> d;

		result = max_of_four(a, b, c, d);
		cout << result << "\n";
	}

	return (0);
}

int max_of_four(int a, int b, int c, int d)
{
	int nums[] = {a, b, c, d};
	int maximum = nums[0];

	for (int i = 1; i <= 3; ++i)
	{
		//cout << nums[i] << endl;
		if (nums[i] > maximum)
			maximum = nums[i];
	}

	return (maximum);
}

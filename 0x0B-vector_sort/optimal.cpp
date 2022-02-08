#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n = 0, number = 0;
	vector<int> v;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> number;
			v.push_back(number);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < n; ++i)
		{
			cout << v[i] << " ";

		}

		cout << "\n";
	}

	return 0;
}

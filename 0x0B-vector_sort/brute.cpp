#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> v;
	int size = 0, element = 0;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> size;

		for (int i = 0; i < size; ++i)
		{
			cin >> element;
			v.push_back(element);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < size; ++i)
		{
			cout << v[i] << " ";

		}

		cout << "\n";
	}

	return 0;
}

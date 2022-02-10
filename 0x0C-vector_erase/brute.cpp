#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int lenght = 0, element = 0, pos = 0, from = 0, to = 0;
	vector<int> v;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> lenght;

		for (int i = 0; i < lenght; ++i)
		{
			cin >> element;
			v.push_back(element);
		}

		cin >> pos >> from >> to;

		v.erase(v.begin() + (pos - 1));
		v.erase(v.begin() + (from - 1), v.begin() + (to - 1));

		cout << v.size() << "\n";

		for (size_t i = 0; i < v.size(); i++)
			cout << v[i] << " ";

		cout << "\n";
	}

	return 0;
}

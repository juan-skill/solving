#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
	int n = 0, a = 0, x = 0, b = 0, c = 0;
	vector<int> v;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			v.push_back(a);
		}

		cin >> x >> b >> c;

		v.erase(v.begin() + x - 1);
		v.erase(v.begin() + b - 1, v.begin() + c - 1);

		cout << v.size() << "\n";

		for (size_t i = 0; i < v.size(); ++i)
			cout << v[i] << " ";

		cout << "\n";
	}



	return 0;
}

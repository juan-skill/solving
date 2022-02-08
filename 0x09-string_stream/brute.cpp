#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> parseInts(string str);


int main(void)
{
	string str = NULL;

	cin >> str;

	vector<int> integers = parseInts(str);

	for (int i = 0; i < integers.size(); ++i)
	{
		cout << integers[i] << "\n";

	}

	return (0);
}

vector<int> parseInts(string str)
{
	stringstream s(str);

	vector <int> a;
	char ch;
	int t;

	while (s >> t)
	{
		a.push_back(t);
		s >> ch;
	}

	return (a);
}

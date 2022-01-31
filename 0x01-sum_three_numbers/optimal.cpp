#include <iostream>

using namespace std;


int main(void)
{
	int a = 0, b = 0, c = 0;
	int tc;

	cin >> tc;

	while (tc--)
	{
		cin >> a >> b >> c;
		cout << a + b + c << "\n";
	}
	
	return (0);
}

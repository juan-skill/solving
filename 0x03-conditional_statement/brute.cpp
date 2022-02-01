#include <iostream>

using namespace std;

int main(void)
{
	long long in;
	int tc = 0;

	cin >> tc;

	while (tc--)
	{
		cin >> in;

		if (in == 1) {
			cout << "one" << "\n";
		} else if (in == 2) {
			cout << "two" << "\n";
		} else if (in == 3) {
			cout << "three" << "\n";
		} else if (in == 4) {
			cout << "four" << "\n";
		} else if (in == 5) {
			cout << "five" << "\n";
		} else if (in == 6) {
			cout << "six" << "\n";
		} else if (in == 7) {
			cout << "seven" << "\n";
		} else if (in == 8) {
			cout << "eight" << "\n";
		} else if (in == 9) {
			cout << "nine" << "\n";
		} else {
			cout << "Greater than 9" << "\n";
		}
	}

	return (0);
}

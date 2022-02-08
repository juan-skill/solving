#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
	int n = 0, queries = 0, length = 0;
	int i = 0, j = 0;

	cin >> n >> queries;

	vector<vector<int>> arr(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> length;
		arr[i].resize(length);

		for (int j = 0; j < length; ++j)
			cin >> arr[i][j];
	}

	for (int k = 0; k < queries; ++k)
	{
		cin >> i >> j;
		cout << arr[i][j] << "\n";
	}



	return 0;
}

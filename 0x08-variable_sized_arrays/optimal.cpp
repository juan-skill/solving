#include <iostream>


using namespace std;


int main(void)
{
	int n = 0, q = 0, k = 0;
	int outer_index = 0, inner_index = 0;

	cin >> n >> q;

	int **outer = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		outer[i] = new int[k];

		for (int j = 0; j < k; ++j)
		{
			cin >> outer[i][j];
		}
	}

	while (q--)
	{
		cin >> outer_index >> inner_index;
		cout << outer[outer_index][inner_index] << "\n";
	}

	return 0;
}

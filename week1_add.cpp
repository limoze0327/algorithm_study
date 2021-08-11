#include <iostream>

using namespace std;

int main()
{
	int T, A, B, C = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A;
		B = 0;
		for (int j = 0; j < A; j++)
		{
			cin >> C;
			B += C;
		}
		cout << B << endl;
	}

	return 0;
}

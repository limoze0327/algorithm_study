#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int a, b;
	string c;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;

		for (int j = 0; j < c.length(); j++)
		{
			for (int r = 0; r < b; r++)
				cout << c[j];
		}
		cout << endl;
	}
	return 0;
}

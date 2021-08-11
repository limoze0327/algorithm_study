#include <iostream>
using namespace std;

int main()
{
	int max, min;
	int count = 0; 
	int n = 0; 
	int result = 0, min_num;  

	cin >> min;
	cin >> max;

	for (int i = min; i <= max; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				count++;
		}

		if (count == 2)
		{
			n++;
			result += i;

			if (n == 1)
				min_num = i;
		}
		count = 0;
	}

	if (n == 0)
	{
		min_num = -1;
		cout << min_num << endl;
	}
	else
	{
		cout << result << endl << min_num << endl;
	}

	return 0;
}

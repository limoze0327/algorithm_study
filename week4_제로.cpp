#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int input = 0;
	int sum = 0;
	stack<int> s;

	cin >> input;

	for (int i = 0; i < input; ++i)
	{
		int num = 0;
		cin >> num;
		if (num != 0) s.push(num);
		else s.pop();
	}


	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum << endl;

	return 0;
}

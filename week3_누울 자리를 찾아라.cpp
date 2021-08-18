#include<iostream>

using namespace std;
int a;
int map[101][101];
int main() {

	cin >> a;

	char r;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> r;
			if (r == '.') map[i][j] = 1;
			else map[i][j] = 0;
		}
	}

	int count_row = 0;
	int row = 0;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (map[i][j] == 1)count_row++;
			else count_row = 0;

			if (count_row == 2)
				row++;
		}

		count_row = 0;
	}


	int col = 0;
	int count_col = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (map[j][i] == 1)count_col++;
			else count_col = 0;

			if (count_col == 2)
				col++;
		}

		count_col = 0;
	}


	cout << row << " " << col;

	return 0;
}

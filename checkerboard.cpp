#include <iostream>
using namespace std;

int main() {
	int i, j, rows;
	char b = 'o', w = 'x';
	cin >> rows;

	for (i = 0; i < rows; i++) {
		for (j = 1; j <= rows; j++) {
			if (j % 2 != 0) cout << b;
			else cout << w;
		}

		char temp = b;
		b = w;
		w = temp;
		cout << '\n';
	}
}

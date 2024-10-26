#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			break;
		}
		int x[2];
		int y[100];
		for (int i = 0; i < 100; ++i) {
			x[i] = i;
			int j = 0;
			if (((a * 100) + x[i]) % b == 0) {
				y[j] = x[i];
				j++;
			}
			cout << y;
		}

		
	}


	return 0;
}
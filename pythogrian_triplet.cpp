#include <bits/stdc++.h>

using namespace std;


void pythogrian(int a, int b, int c) {
	int x = max(a, max(b, c));
	int y, z;
	if (x == a) {
		y = b;
		z = c;
	}
	else if (x == b) {
		y = a;
		z = c;
	}
	else {
		y = a;
		z = b;
	}

	if (x * x == (y * y + z * z)) {
		cout << "Pythogrian Triplet" << endl;
	}
	else {
		cout << "Not pythogrian Triplet" << endl;
	}

}


int main() {


	int a, b, c;
	cin >> a >> b >> c;


	pythogrian(a, b, c);

	return 0;
}

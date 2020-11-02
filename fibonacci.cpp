#include <bits/stdc++.h>
// #include <cmath>
// #include <iostream>

using namespace std;


void fibo(int n) {
	int a = 0;
	int b = 1;

	cout << a << " " << b << " ";

	for (int i = 0; i < n; i++) {
		int c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}

}


int main() {




	int n;
	cin >> n;

	fibo(n);


	return 0;
}

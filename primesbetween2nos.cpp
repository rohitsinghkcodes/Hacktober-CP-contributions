#include <bits/stdc++.h>
// #include <cmath>
// #include <iostream>

using namespace std;


bool isPrime(int n) {
	int flag = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {




	int a, b;

	cin >> a >> b;


	for (int i = a; i < b; i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}

	}


	return 0;
}

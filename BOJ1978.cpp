#include<iostream>

using namespace std;

bool prime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n, x, r = 0;
	cin >> n;
	while (n--) {
		cin >> x;
		if (prime(x) == true)
			r++;		
	}
	cout << r << "\n";

	return 0;
}
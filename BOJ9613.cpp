#include<iostream>

#pragma warning (disable:4996)

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		gcd(b, a%b);
}

int main() {
	int t;
	long long a[110], sum = 0;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long g;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				g = gcd(a[i], a[j]);
				sum += g;
			}
		}
		cout << sum << "\n";
		sum = 0;
	}
	return 0;
}
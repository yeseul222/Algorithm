#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	string s;
	vector<int> v;
	int sum = 0;

	cin >> s;

	int slen = s.length();

	int a[3];

	for (int i = slen - 1; i >= 0; i -= 3) {
		if (i >= 0) {
			a[0] = s[i] - 48;
		}
		if (i - 1 >= 0) {
			a[1] = s[i - 1] - 48;
		}
		if (i - 2 >= 0) {
			a[2] = s[i - 2] - 48;
		}

		for (int j = 0; j <= 2; j++) {
			if (a[j] == 1) {
				a[j] = pow(2, j);
				sum += a[j];
			}
		}

		v.push_back(sum);
		sum = 0;
	}
	while (!v.empty()) {
		cout << v.back();
		v.pop_back();
	}
	cout << "\n";
	return 0;
}
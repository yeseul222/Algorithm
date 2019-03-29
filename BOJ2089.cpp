#include<iostream>
#include<vector>

using namespace std;

int main() {
	long long n;
	vector<int> v;

	cin >> n;
	if (n == 0)
		cout << "0";
	else {
		while (n != 1) {
			if (n < 0) {
				if ((n - 1) % -2 == 0)
					v.push_back(1);
				else
					v.push_back(0);
				n = (n - 1) / -2;
			}
			else if (n > 0) {
				v.push_back(n % -2);
				n /= -2;
			}
		}

		v.push_back(1);
		while (!v.empty()) {
			cout << v.back();
			v.pop_back();
		}
	}
	cout << "\n";

	return 0;
}
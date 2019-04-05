#include <iostream>

using namespace std;

int main() {
	int n, tmp, cnt = 0;
	cin >> n;

	for (int i = 5; i <= n; i += 5) {
		tmp = i;
			while (tmp % 5 == 0) {
				tmp /= 5;
				cnt++;
			}
	}
	cout << cnt << "\n";
	return 0;
}
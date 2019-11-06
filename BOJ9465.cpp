#include<iostream>
#include<algorithm>

using namespace std;

int a[3][100001];
int d[100001][3];

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 1; i <= 2; i++) {
			for (int j = 1; j <= n; j++) {
				int tmp;
				cin >> tmp;
				a[i][j] = tmp;
			}
		}
		d[1][0] = 0;
		d[1][1] = a[1][1];
		d[1][2] = a[2][1];
		for (int i = 2; i <= n; i++) {
			d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[1][i];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[2][i];
		}
		cout << max(d[n][0], max(d[n][1], d[n][2])) << '\n';
	}

	return 0;
}
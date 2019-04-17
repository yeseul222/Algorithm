#include <iostream>

using namespace std;

int a[101][11]; //전역변수는 0으로 자동초기화 

int main() {
	int n;
	long long res = 0;
	cin >> n;

	for (int i = 1; i <= 9; i++) {
		a[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0)
				a[i][j] += a[i - 1][j + 1];
			else if (j == 9)
				a[i][j] += a[i - 1][j - 1];
			else
				a[i][j] += a[i - 1][j - 1] + a[i - 1][j + 1];
			a[i][j] %= 1000000000;	//?
		}
	}
	for (int i = 0; i <= 9; i++) {
		res += a[n][i];
	}
	cout << res%1000000000 << '\n';

	return 0;
}
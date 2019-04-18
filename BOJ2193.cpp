#include <iostream>

using namespace std;

long long a[91][2]; //전역변수는 0으로 자동초기화 

int main() {
	int n;
	long long res = 0;
	cin >> n;

	a[1][1] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 1; j++) {
			if (j == 0)
				a[i][j] += a[i - 1][1] + a[i - 1][0];
			else if (j == 1)
				a[i][j] += a[i - 1][0];
		}
	}
	for (int i = 0; i <= 1; i++) {
		res += a[n][i];
	}
	cout << res << '\n';

	return 0;
}

//#include <iostream>
//using namespace std;
//long long d[91];
//int main() {
//	int n;
//	cin >> n;
//	d[1] = 1;
//	d[2] = 1;
//	for (int i = 3; i <= n; i++) {
//		d[i] = d[i - 1] + d[i - 2];	// 0을 붙이는 경우 : d[i - 1]에 모두 가능 , 1을 붙이는 경우 : d[i - 2]에 01을 붙인다고 생각
//	}
//	cout << d[n] << '\n';
//	return 0;
//}
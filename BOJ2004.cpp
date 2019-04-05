//조합 nCm = n! / (m! * (n-m)!)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long two = 0, five = 0;
	long long n, m;
	cin >> n >> m;
	for (long long i = 2; i <= n; i *= 2) {
		two += n / i;
	}
	for (long long i = 2; i <= n - m; i *= 2) {
		two -= (n - m) / i;
	}
	for (long long i = 2; i <= m; i *= 2) {
		two -= m / i;
	}
	for (long long i = 5; i <= n; i *= 5) {
		five += n / i;
	}
	for (long long i = 5; i <= n - m; i *= 5) {
		five -= (n - m) / i;
	}
	for (long long i = 5; i <= m; i *= 5) {
		five -= m / i;
	}
	cout << min(two, five) << '\n';
	return 0;
}
////시간초과
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	long long n, m, tmp, cnt2 = 0, cnt5 = 0;
//	cin >> n >> m;
//	for (long long i = 2; i <= n; i += 2) {
//		tmp = i;
//		while (tmp % 2 == 0) {
//			tmp /= 2;
//			cnt2++;
//		}
//	}
//	for (long long i = 2; i <= n - m; i += 2) {
//		tmp = i;
//		while (tmp % 2 == 0) {
//			tmp /= 2;
//			cnt2--;
//		}
//	}
//	for (long long i = 2; i <= m; i += 2) {
//		tmp = i;
//		while (tmp % 2 == 0) {
//			tmp /= 2;
//			cnt2--;
//		}
//	}
//	for (long long i = 5; i <= n; i += 5) {
//		tmp = i;
//		while (tmp % 5 == 0) {
//			tmp /= 5;
//			cnt5++;
//		}
//	}	for (long long i = 5; i <= n - m; i += 5) {
//		tmp = i;
//		while (tmp % 5 == 0) {
//			tmp /= 5;
//			cnt5--;
//		}
//	}
//	for (long long i = 5; i <= m; i += 5) {
//		tmp = i;
//		while (tmp % 5 == 0) {
//			tmp /= 5;
//			cnt5--;
//		}
//	}
//
//	if (cnt5 > cnt2) 
//		cout << cnt2 << "\n";
//	else
//		cout << cnt5 << "\n";
//	return 0;
//}
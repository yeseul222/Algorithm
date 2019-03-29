//cin, cout 사용하면 시간초과 남
#include<iostream>
#include<vector>

#pragma warning(disable:4996)
using namespace std;

bool c[1000001];
vector<int> v;

//에라토스테네스의 체
void Eratos() {
	int n;
	n = 1000000;
	c[0] = c[1] = true;

	for (int i = 2; i <= n; i++) {
		if (c[i] == false) {
			for (int j = i * 2; j <= n; j += i) { //범위에 따라 i*2나 i*i 사용
				c[j] = true;
			}
			if (i % 2 == 1)	//홀수면 push
				v.push_back(i);
		}
	}
}
int main() {
	Eratos();
	int n, tmpA, tmpB, a = 0, b = 0, vSize;
	vSize = v.size();
	scanf("%d", &n);
	while (n != 0) {
		for (int i = 0; i < vSize; i++) {
			tmpA = v[i];
			for (int j = 0; j < vSize; j++) {
				tmpB = v[j];
				if (n < tmpA + tmpB) {
					break;
				}
				if (n == tmpA + tmpB) {
					a = tmpA;
					b = tmpB;
					break;
				}
			}
			if (n == a + b)
				break;
		}
		if (a == 0 && b == 0)
			printf("Goldbach's conjecture is wrong.\n");
		else
			printf("%d = %d + %d\n", n, a, b);
		scanf("%d", &n);
	}
	return 0;
}
//이렇게도 가능함
//while (true) {
//	int n;
//	cin >> n;
//	if (n == 0) {
//		break;
//	}
//	for (int i = 1; i < pn; i++) {
//		if (c[n - v[i]] == false) {
//			cout << n << " = " << v[i] << " + " << n - v[i] << '\n';
//			break;
//		}
//	}
//}
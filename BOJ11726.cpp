#include<iostream>

using namespace std;
int d[1001];
int main() {
	int n;

	cin >> n;

	d[1] = 1;
	d[2] = 2;

	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
		d[i] = d[i] % 10007;    //이렇게 하면 d[i+1]의 값이 달라지지 않나?
	}

	cout << d[n];
	return 0;
}
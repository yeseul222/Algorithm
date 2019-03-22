#include<iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		gcd(b, a%b);
}

int main() {
	int n;
	int a, b;
	cin >> n;
	while (n--){
		cin >> a >> b;
		int g, l;
		g = gcd(a, b);
		l = g*(a / g)*(b / g);
		cout << l << "\n";
	}
	return 0;
}
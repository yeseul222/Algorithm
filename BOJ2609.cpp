#include<iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		gcd(b, a%b);
}

int main() {
	int a, b;
	cin >> a >> b;
	int g, l;
	g = gcd(a, b);
	l = g*(a / g)*(b / g);
	cout << g << "\n" << l << "\n";
	return 0;
}
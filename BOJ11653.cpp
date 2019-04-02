#include<iostream>
#include<set>
using namespace std;

int main() {
	int n;
	multiset<int> s;
	cin >> n;

	for (int i = 2; i*i <= n; i++) {
		while (n%i == 0) {
			s.insert(i);
			n /= i;
		}
	}
	if (n > 1)
		s.insert(n);

	multiset<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter) {
		cout << *iter << "\n";
	}
	return 0;
}
#include<iostream>
#include<string>
#include<set>
#include <functional>
using namespace std;

int main() {
	int n;
	cin >> n;
	pair<string, string> p;
	set<string> s;
	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		p = make_pair(s1, s2);
		if (p.second == "enter") {
			s.insert(p.first);
		}
		else if (p.second == "leave") {
			s.erase(s.find(p.first));
		}
	}

	for (auto it = --s.end(); it != s.begin(); it--) {
		cout << *it << '\n';
	}
	auto it = s.begin();
	cout << *it << '\n';

	return 0;
}
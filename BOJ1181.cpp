#include<iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	string str;
	set < pair<int, string > > s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		s.insert(make_pair(str.length(), str));
	}
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << (*it).second << '\n';
	}
	return 0;
}
#include<iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	string str;
	set<string> s;
	int slen;
	cin >> str;
	slen = str.length();
	for (int i = 0 ; i < slen; i++) {
		s.insert(str.substr(i, i + slen));	
	}
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << *it << '\n';
	}
	return 0;
}
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	int t;
	cin >> t;
	stack<char> s;
	string str;
	int strlen;
	while (t--) {
		cin >> str;
		strlen = str.length();
		for (int i = 0; i < strlen; i++) {
			if (str[i] == '(') {
				s.push('(');
			}
			else if (str[i] == ')') {
				if (s.empty() == true) {
					s.push('x');
					break;
				}
				else
					s.pop();
			}
		}
		if (s.empty() == true)
			cout << "YES\n";
		else {
			cout << "NO\n";
		}
		while (!s.empty()) s.pop();
	}
}
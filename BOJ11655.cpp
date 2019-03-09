#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int slen;
	getline(cin, s);
	slen = s.length();
	for (int i = 0; i < slen; i++) {
		if ((s[i] >= 'a' && s[i] <= 'm')|| (s[i] >= 'A' && s[i] <= 'M')) {
		s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z')||(s[i] >= 'N' && s[i] <= 'Z')) {
			s[i] = s[i] - 13;
		}
		else
			s[i] = s[i];
		cout << s[i];
	}
	cout << "\n";

	return 0;
}

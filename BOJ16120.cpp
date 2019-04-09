#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	cin >> str;
	int strlen = str.length();
	stack<char> s;
	int i;
	for (i = 0; i < strlen; i++) {
		if (str[0] == 'A') {
			s.push('A');
		}
		if (i != strlen - 1) {
			if (str[i] == 'A' && str[i + 1] == 'P') {
				if (s.top() == 'P') {
					s.pop();
					if (s.empty()) {
						break;
					}
					if (s.top() == 'P') {
						s.pop();
					}
					else {
						break;
					}
				}
			}
			else if (str[i] == 'P')
				s.push('P');

		}
	}
	if (i == strlen && s.empty()) {
		cout << "PPAP\n";
	}
	else {
		cout << "NP\n";
	}
}
////시간초과
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	while (1) {
//		int strlen = s.length();
//		int p = s.find("PPAP");
//		if (p != string::npos) {
//			s = s.substr(0, p + 1) + s.substr(p + 4, strlen - (p + 3));
//		}
//		else if (p == string::npos) {
//			cout << "NP\n";
//			break;
//		}
//
//		if (s.compare("P") == 0) {
//			cout << "PPAP\n";
//			break;
//		}
//
//	}
//}
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {
		int lower = 0;
		int upper = 0;
		int number = 0;
		int space = 0;
		for (char x : s) {
			if (x >= 'a' && x <= 'z') {
				lower += 1;
			}
			else if (x >= 'A' && x <= 'Z') {
				upper += 1;
			}
			else if (x >= '0' && x <= '9') {
				number += 1;
			}
			else if (x == ' ') {
				space += 1;
			}
		}
		cout << lower << ' ' << upper << ' ';
		cout << number << ' ' << space << '\n';
	}
	return 0;
}
//#include <iostream>
//#include <string>
//
//#pragma warning (disable:4996)
//
//using namespace std;
//
//int main() {
//	int count[4] = { 0 };
//	char c[102];
//	while (!cin.eof()) {
//		cin.getline(c, 100);
//		for (int i = 0; i < 27; i++) {
//			for (int j = 'a'; j <= 'z'; j++) {
//				if (c[i] == j) {
//					count[0]++;
//				}
//			}
//			for (int j = 'A'; j <= 'Z'; j++) {
//				if (c[i] == j) {
//					count[1]++;
//				}
//			}
//			for (int j = '0'; j <= '9'; j++) {
//				if (c[i] == j) {
//					count[2]++;
//				}
//			}
//			if (c[i] == ' ')
//				count[3]++;
//		}
//		for (int i = 0; i < 4; i++) {
//			cout << count[i] << " ";
//			count[i] = 0;
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//실패(이유 못 찾음)

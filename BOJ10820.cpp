#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {	//string에 정의되어 있음 getline(cin, s, 구분자(default = '\n'))
		int lower = 0;
		int upper = 0;
		int number = 0;
		int space = 0;
		for (char x : s) {	//s의 객체가 없을때까지 차례대로 뽑아서 x에 넣음
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

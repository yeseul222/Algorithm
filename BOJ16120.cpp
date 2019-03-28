//시간초과
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1,s2,s3;
	cin >> s1;
	while (1) {
		int strlen = s1.length();
		int p = s1.find("PPAP");
		if (s1.find("PPAP") != string::npos) {
			s2 = s1.substr(0, p + 1);
			s3 = s1.substr(p + 4, strlen - (p + 3));
			s1 = s2 + s3;
		}
		else if (s1.find("PPAP") == string::npos) {
			cout << "NP\n";
			break;
		}

		if (s1.compare("P") == 0) {
			cout << "PPAP\n";
			break;
		}

	}
}
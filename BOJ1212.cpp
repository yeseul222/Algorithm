#include <iostream>
#include <string>

using namespace std;

int main() {
	string eight[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };

	string s;

	cin >> s;

	int n = s.length();

	if (s[0] == '0') {
		cout << "0";
	}
	else if (s[0] == '1') {
		cout << "1";
	}
	else if (s[0] == '2') {
		cout << "10";
	}
	else if (s[0] == '3') {
		cout << "11";
	}
	else {
		cout << eight[(s[0] - '0')];
	}
	for (int i = 1; i < n; i++) {
		cout << eight[(s[i] - '0')];
	}
	cout << "\n";
	return 0;
}
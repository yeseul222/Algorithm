#include <iostream>
#include <string>
#pragma warning (disable:4996)

using namespace std;

int main() {
	int arr[30] = { 0 };
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		arr[s[i]-97]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
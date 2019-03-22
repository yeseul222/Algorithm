#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[30] = { 0 };
	string s;
	cin >> s;
    int s_length = s.length();
	for (int i = 0; i < s_length; i++) {
		arr[s[i]-97]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
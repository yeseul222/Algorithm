#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int len = 0;
	cin >> s;
	for (int i = 0; s[i]; i++) {  //for(int i : {0, 1, 2} -> 배열 순회
		len++;
	}
	cout << len << "\n";
	return 0;
}
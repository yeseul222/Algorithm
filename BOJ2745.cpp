#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int main() {
	string n;
	int b, nlen;
	cin >> n;
	cin >> b;
	nlen = n.length();
	int k = nlen - 1;
	long long res = 0;
	for (int i = 0; i < nlen; i++) {
		if (n[i] >= '0' && n[i] <= '9') {
			res += ((n[i] - '0') * pow(b, k)); 
		}
		else {
			res += ((n[i] - 'A' + 10) * pow(b, k));
		}
		k--;
	}
	cout << res << "\n";
	return 0;
}
 //만약 n[i] = '0' 이면 (int)n[i] = 0이 아니라 48이 나옴
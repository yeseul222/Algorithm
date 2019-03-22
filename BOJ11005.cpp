#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int bc(int a, int b) {
	if (a == 0) {
		return 0;
	}
	else {
		v.push_back(a%b);
		bc(a / b, b);
	}
}

int main() {
	int n, b;
	cin >> n >> b;	
	if (bc(n, b) == 0) {
		int vSize = v.size();
		for (int i = vSize - 1; i >= 0; i--) {
			if (v[i] >= 0 && v[i] <= 9) {
				cout << v[i];
			}
			else {
				cout << (char)(v[i]+55);
			}
		}
	}
	return 0;
}
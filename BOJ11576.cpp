#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int A, B, N, sum = 0;
	vector<int> v1, v2;
	cin >> A >> B;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v1.push_back(x);
	}

	for (int i = 0; i < N; i++) {
		int tmp;
		tmp = v1.back() * pow(A, i);
		sum += tmp;
		v1.pop_back();
	}
		

	while (1) {
		if (sum >= B) {
			v2.push_back(sum % B);
			sum /= B;
		}
		else {
			v2.push_back(sum);
			sum = 0;
			break;
		}
	}
	while (!v2.empty()) {
		cout << v2.back() << " ";
		v2.pop_back();
	}
	cout << "\n";
	return 0;
}
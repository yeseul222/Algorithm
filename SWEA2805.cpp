#include<iostream>
#include <string>
using namespace std;

int main() {
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;

		int f[50][50];
		for (int i = 1; i <= N; i++) {
			string s;
			cin >> s;
			for (int j = 0; j < N; j++) {
				f[i][j + 1] = s[j] - '0';
			}
		}
		int mid = N / 2 + 1;
		int num = 1, sum = 0;
		
		for (int j = 1; j <= N; j++) {
			sum += f[mid][j];
		}
		for (int i = mid - 1; i >= 1; i--) {
			for (int j = 1 + num; j <= N - num; j++) {
				sum += f[i][j];			
			}
			num++;
		}
		num = 1;
		for (int i = mid + 1; i <= N; i++) {
			for (int j = 1 + num; j <= N - num; j++) {
				sum += f[i][j];
				
			}
			num++;
		}
		cout << "#" << test_case << " " << sum << "\n";
	}
}
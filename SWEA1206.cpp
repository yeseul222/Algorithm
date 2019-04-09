#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int test_case;

	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		int sum = 0;
		cin >> n;
		int view[1001];
		for (int i = 1; i <= n; i++) {
			int tmp;
			cin >> tmp;
			view[i] = tmp;
		}
		for (int i = 3; i <= n - 2; i++) {
			if (view[i] >= view[i + 1] && view[i] >= view[i + 2] && view[i] >= view[i - 1] && view[i] >= view[i - 2])
			{
				sum += view[i] - max(max(view[i + 1], view[i + 2]), max(view[i - 1], view[i - 2]));
			}
		}
		cout << "#" << test_case << " ";
		cout << sum << "\n";
	}
}
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> a[1001];
bool check[1001];
int n;

void dfs(int x) {
	check[x] = true;
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == false)
			dfs(y);
	}
}

int main() {
	int m, cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		a[tmp1].push_back(tmp2); a[tmp2].push_back(tmp1);
	}

	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}

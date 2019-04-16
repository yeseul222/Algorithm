//인접리스트
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

vector<int> a[1001];
bool check[1001];
int n;

void dfs(int x) {
	check[x] = true;
	cout << x << " ";
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == false)
			dfs(y);
	}
}

void bfs(int x) {
	queue<int> q;
	check[x] = true;
	q.push(x);
	while (!q.empty()) {
		int y = q.front();
		int z;
		for (int i = 0; i < a[y].size(); i++) {
			z = a[y][i];
			if (check[z] == false) {
				check[z] = true;
				q.push(z);
			}
		}
		cout << y << " ";
		q.pop();

	}
}

int main() {
	int m, v;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		a[tmp1].push_back(tmp2); a[tmp2].push_back(tmp1);
	}
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	dfs(v);

	for (int i = 1; i <= n; i++) {
		check[i] = false;
	}
	cout << "\n";

	bfs(v);

	return 0;
}

// //인접행렬
// #include<iostream>
// #include<stack>
// #include<queue>

// using namespace std;

// int a[1001][10001];
// bool check[1001];
// int n;

// void dfs(int x) {
// 	check[x] = true;
// 	cout << x << " ";
// 	for (int i = 1; i <= n; i++) {
// 		if (a[x][i] == 1 && check[i] == false)
// 			dfs(i);
// 	}
// }

// void bfs(int x) {
// 	queue<int> q;
// 	check[x] = true;
// 	q.push(x);
// 	while (!q.empty()) {
// 		int y = q.front();
// 		for (int i = 1; i <= n; i++) {
// 			if (a[y][i] == 1 && check[i] == false) {
// 				check[i] = true; 
// 				q.push(i);
// 			}
// 		}
// 		cout << y << " ";
// 		q.pop();
		
// 	}
// }

// int main() {
// 	int m, v;
// 	cin >> n >> m >> v;
// 	for (int i = 0; i < m; i++) {
// 		int tmp1, tmp2;
// 		cin >> tmp1 >> tmp2;
// 		a[tmp1][tmp2] = a[tmp2][tmp1] = 1;
// 	}

// 	dfs(v);
// 	for (int i = 1; i <= n; i++) {
// 		check[i] = false;
// 	}
// 	cout << "\n";
// 	bfs(v);
//     return 0;
// }

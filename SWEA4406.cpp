#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;

	queue<char> q;

	for (test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;
		int slen = s.length();
		for (int i = 0; i < slen; i++) {
			if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
				q.push(s[i]);
		}

		printf("#%d ", test_case);

		while (!q.empty()) {
			printf("%c", q.front());
			q.pop();		
		}
		printf("\n");
	}
	return 0;
}
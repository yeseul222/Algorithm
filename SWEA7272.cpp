#include<iostream>
#include<string>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		string s1, s2;
		cin >> s1 >> s2;
		printf("#%d ", test_case);
		int s1len = s1.length();
		int s2len = s2.length();
		int tmp1, tmp2, re = 1;
		if (s1len == s2len) {
			for (int i = 0; i < s1len; i++) {
				if (s1[i] == 'A' || s1[i] == 'D' || s1[i] == 'O' || s1[i] == 'P' || s1[i] == 'Q' || s1[i] == 'R')
				{
					tmp1 = 1;
				}
				else if (s1[i] == 'B') {
					tmp1 = 2;
				}
				else {
					tmp1 = 0;
				}
				if (s2[i] == 'A' || s2[i] == 'D' || s2[i] == 'O' || s2[i] == 'P' || s2[i] == 'Q' || s2[i] == 'R')
				{
					tmp2 = 1;
				}
				else if (s2[i] == 'B') {
					tmp2 = 2;
				}
				else {
					tmp2 = 0;
				}
				if (tmp1 != tmp2) {
					printf("DIFF\n");
					re = 0;
					break;
				}
					
			}
			if (re == 1)
				printf("SAME\n");
		}
		else {
			printf("DIFF\n");
		}
	}
	return 0;
}
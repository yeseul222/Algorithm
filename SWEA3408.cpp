#include<iostream>

using namespace std;

int main() {
		int test_case;
		int T;
		scanf_s("%d", &T);
		long int s1, s2, s3, n;
		for (test_case = 1; test_case <= T; ++test_case)
		{
			scanf_s("%ld", &n);
			s1 = n*(n + 1) / 2;
			s3 = s1 * 2;
			s2 = s3 - n;

			printf("#%d %ld %ld %ld\n", test_case, s1, s2, s3);

		}
		return 0;
}
//for문 1억번이 1초 정도
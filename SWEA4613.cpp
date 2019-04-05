#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int result1 = 0, result2 = 0, result3 = 0;
		char x;
		int M, N;
		int W = 0, B = 0, R = 0;
		cin >> N >> M;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				cin >> x;
				if (x == 'W')W++;
				else if (x == 'B')B++;
				else R++;
			}
			if (i == 1) // 첫 번째 줄은 W
				result1 = result2 = result3 = B + R;
			else if (i == 2) {	// 두 번째는 R이 들어갈 수 없음
				result1 += B + R; // W
				result2 += W + R; // B
				result3 += W + R; // B
			}
			else if (i == (N - 1)) {	// N-1 번째 줄은 W가 들어갈 수 없음
				result3 = min(result2, result3) + W + B;
				result2 = min(result1, result2) + W + R;
				result1 += W + R;	// W 우선이기 때문에 N-1 번째 줄에는 B가 들어가야 함
			}
			else if (i == N) {	// N 번째 줄은 R
				result2 += W + B;
				result1 += W + B;
				result3 += W + B;
			}
			else {	// 3 ~ N-2 번째 줄에는 윗 줄의 결과중 작은 값에 현재 줄의 칠해야 되는 색상을 더해주어야 함
				result3 = min(result2, result3) + W + B;
				result2 = min(result1, result2) + W + R;
				result1 += B + R;
			}
			W = B = R = 0;
		}
	printf("#%d %d\n", test_case, min(result1, min(result2, result3)));
	}
	return 0;
}
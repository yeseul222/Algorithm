//에라토스테네스의 채
//2 ~ n-1까지 차례로 배수를 지워감
#include<iostream>

using namespace std;

bool c[1000001];    //전역변수가 아니면 자동 초기화가 안됨
int main() {
	int m, n;
	cin >> m >> n;
    c[0] = c[1] = true;
	for (int i = 2; i <= n; i++) {
		if (c[i] == false) {		
			for (int j = i*2; j <= n; j += i) { //범위에 따라 i*2나 i*i 사용
				c[j] = true;    //지워지면 ture
			}
			if (i >= m)
				cout << i << "\n";
		}	
	}
	return 0;
}
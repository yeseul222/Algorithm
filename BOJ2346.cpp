#include <iostream>
#include <list>
using namespace std;
int main() {
	int n;
	list<pair<int, int>> a;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back({ x,i });
	}

	auto it = a.begin();
	for (int i = 0; i<n - 1; i++) {
		cout << (it->second) << ' ';
		int step = it->first;
		if (step > 0) {
			auto temp = it;
			++temp;
			if (temp == a.end()) {
				temp = a.begin();
			}
			a.erase(it);
			it = temp;
			for (int i = 1; i<step; i++) {
				++it;
				if (it == a.end()) {
					it = a.begin();
				}
			}
		}
		else if (step < 0) {
			step = -step;
			auto temp = it;
			if (temp == a.begin()) {
				temp = a.end();
			}
			--temp;
			a.erase(it);
			it = temp;
			for (int i = 1; i<step; i++) {
				if (it == a.begin()) {
					it = a.end();
				}
				--it;
			}
		}
	}

	cout << a.front().second << '\n';

	return 0;
}
//다음에 다시 해보기
//
//#include <iostream>
//#include <list>
//
//using namespace std;
//
//int main() {
//	int n, index;
//	list<int> li;
//	list<int>::iterator iter;
//	int num;
//	cin >> n;
//	int nn = n - 1;
//	while (n--) {
//		cin >> num;
//		li.push_back(num);
//	}
//	int mv;
//	iter = li.begin();
//	mv = *iter;
//	index = 1;
//	while (nn--) {
//		if (mv >= 0) {
//			li.erase(iter);
//			li.insert(iter, 0);
//			for (int i = 0; i < mv; i++) {
//				iter++;
//				index++;
//				if (iter == li.end()) {
//					iter = li.begin();
//					index = 1;
//				}
//				if (*iter == 0) {
//					iter++;
//					index++;
//				}	
//			}
//			mv = *iter;
//			cout << index << " ";
//		}
//		else {
//			li.erase(iter);
//			li.insert(iter, 0);
//			for (int i = 0; i < abs(mv); i++) {
//				iter--;
//				index--;
//				if (iter == li.begin()) {
//					iter = li.end();
//					index = li.size() + 1;
//				}
//				if (*iter == 0) {
//					iter--;
//					index--;
//				}
//			}
//			cout << index << " ";
//		}
//		cout << "\n";
//	}
//}
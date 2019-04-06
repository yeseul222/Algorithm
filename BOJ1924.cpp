#include <iostream>
#include <string>
using namespace std;

int main() {
	int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string d[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

	int x, y, z = 0, a;

	cin >> x >> y;

	if (x == 1)
	{
		a = y % 7;
	}
	else
	{
		for (int i = 0; i < x-1; i++)
		{
			z += m[i];
		}
		a = (z + y) % 7;
	}
	cout << d[a] << "\n";

	return 0;
}
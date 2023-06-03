#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16483 접시 안의 원
	// 기하학
	int t;
	cin >> t;
	double r = (double)t / 2.0;
	cout << (int)(r * r + 0.5);

	return 0;
}

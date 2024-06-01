#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31472 갈래의 색종이 자르기
	// 수학
	int w;
	cin >> w;

	cout << sqrt(w * 32);

	return 0;
}

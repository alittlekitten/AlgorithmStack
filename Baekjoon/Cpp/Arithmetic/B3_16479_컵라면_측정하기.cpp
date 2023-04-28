#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 16479 컵라면 측정하기
	// 수학
	double k, d1, d2;
	cin >> k >> d1 >> d2;
	double h = (max(d1, d2) - min(d1, d2)) / 2.0;
	cout << k * k - h * h ;

	return 0;
}

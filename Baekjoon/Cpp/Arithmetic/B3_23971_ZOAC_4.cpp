#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23971 ZOAC 4
	// 수학
	double h, w, n, m;
	cin >> h >> w >> n >> m;
	cout << (long long)ceil(h / (n + 1)) * (long long)ceil(w / (m + 1));

	return 0;
}

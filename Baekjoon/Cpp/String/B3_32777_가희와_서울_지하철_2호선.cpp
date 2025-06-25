#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32777 가희와 서울 지하철 2호선
	// 문자열
	int q, a, b;
	cin >> q;
	while (q--) {
		cin >> a >> b;
		int in = (b - a + 43) % 43;
		int out = (a - b + 43) % 43;

		if (in < out) cout << "Inner circle line\n";
		else if (in > out) cout << "Outer circle line\n";
		else cout << "Same\n";
	}


	return 0;
}

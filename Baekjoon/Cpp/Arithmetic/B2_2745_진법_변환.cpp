#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2745 진법 변환
	// 수학
	string n;
	int b;
	string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> n >> b;

	int ans = 0;
	for (int i = 0; i < n.size(); ++i) {
		int tmp = s.find(n[i]);
		ans += tmp * pow(b, n.size() - 1 - i);
	}

	cout << ans;

	return 0;
}

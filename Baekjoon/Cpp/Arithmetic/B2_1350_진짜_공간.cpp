#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1350 진짜 공간
	// 수학
	int n, input, c;
	vector<long long> v;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	cin >> c;
	long long cnt = 0;
	for (int i = 0; i < n; ++i) {
		cnt += v[i] / c;
		if (v[i] % c != 0) ++cnt;
	}

	cout << c * cnt;

	return 0;
}

#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10815 숫자 카드
	// 해시
	int n, m, input;
	map<int, bool> mm;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mm[a] = true;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;
		if (mm[input]) cout << 1 << " ";
		else cout << 0 << " ";
	}

	return 0;
}

#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1269 대칭 차집합
	// 해시
	int n, m, input;
	map<int, bool> mm;
	cin >> n >> m;
	for (int i = 0; i < n + m; ++i) {
		cin >> input;
		if (mm[input]) mm.erase(input);
		else mm[input] = true;
	}
	cout << mm.size();

	return 0;
}

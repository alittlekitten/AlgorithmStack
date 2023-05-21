#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28113 정보섬의 대중교통
	// 수학
	int n, a, b;
	cin >> n >> a >> b;
	if (n > b) cout << "Bus";
	else {
		if (a < b) cout << "Bus";
		else if (a == b) cout << "Anything";
		else cout << "Subway";
	}

	return 0;
}

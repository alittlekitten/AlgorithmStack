#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29790 임스의 메이플컵
	// 구현
	int n, u, l;
	cin >> n >> u >> l;
	
	if (n < 1000) {
		cout << "Bad";
		return 0;
	}
	else {
		if (u >= 8000 || l >= 260) cout << "Very Good";
		else cout << "Good";
	}

	return 0;
}

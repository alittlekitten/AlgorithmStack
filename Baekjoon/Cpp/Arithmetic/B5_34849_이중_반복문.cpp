#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34849 이중 반복문
	// 수학
	int n;
	cin >> n;
	if (n > 10000) cout << "Time limit exceeded";
	else cout << "Accepted";

	return 0;
}

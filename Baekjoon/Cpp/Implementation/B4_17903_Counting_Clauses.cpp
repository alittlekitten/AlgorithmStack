#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17903 Counting Clauses
	// 구현
	int n, m;
	int arr[21][21] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cin >> arr[i][j];
	}
		
	if (n >= 8) cout << "satisfactory";
	else cout << "unsatisfactory";

	return 0;
}

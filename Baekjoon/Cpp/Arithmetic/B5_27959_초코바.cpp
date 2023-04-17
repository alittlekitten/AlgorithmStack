#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 27959 초코바
	// 수학
	int n, m;
	cin >> n >> m;
	if (100 * n - m >= 0) cout << "Yes";
	else cout << "No";

	return 0;
}

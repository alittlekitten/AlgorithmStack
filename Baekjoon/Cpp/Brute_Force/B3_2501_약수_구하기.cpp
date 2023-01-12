#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2501 약수 구하기
	// 브루트포스
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			++cnt;
			if (cnt == k) {
				cout << i;
				break;
			}
		}
	}
	if (cnt < k) cout << 0;
	
	return 0;
}    

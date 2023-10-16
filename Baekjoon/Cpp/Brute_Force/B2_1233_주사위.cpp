#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1233 주사위
	// 브루트포스
	int s1, s2, s3;
	int arr[81] = { 0 };
	int maxValue = 0;
	int ans = 0;
	cin >> s1 >> s2 >> s3;

	for (int i = 1; i <= s1; ++i){
		for (int j = 1; j <= s2; ++j) {
			for (int k = 1; k <= s3; ++k) {
				arr[i + j + k]++;
			}
		}
	}
	
	for (int i = 1; i <= 80; ++i)
		if (arr[i] > maxValue) {
			maxValue = arr[i];
			ans = i;
		}

	cout << ans;

	return 0;
}

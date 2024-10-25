#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14487 욱제는 효도쟁이야!!
	// 그리디
	int n;
	cin >> n;

	int arr[50001] = { 0 };
	int ans = 0;
	int maxValue = 0;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (maxValue < arr[i]) maxValue = arr[i];
		ans += arr[i];
	}

	cout << ans - maxValue;

	return 0;
}

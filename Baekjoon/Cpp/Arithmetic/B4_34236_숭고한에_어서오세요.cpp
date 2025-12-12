#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34236 숭고한에 어서오세요
	// 수학
	int n;
	int arr[100] = { 0 };

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	cout << arr[n - 1] + arr[1] - arr[0];

	return 0;
}

#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20937 떡국
	// 그리디
	int n, input;
	int arr[50001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		++arr[input];
	}
	int ans = -1;
	for (int i = 1; i < 50001; ++i) if (ans < arr[i]) ans = arr[i];

	cout << ans;

	return 0;
}    

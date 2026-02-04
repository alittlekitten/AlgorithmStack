#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30216 Increasing Sublist
	// 수학
	int n;
	int arr[30] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	int currValue = 1;
	int maxValue = 1;

	for (int i = 1; i < n; ++i) {
		if (arr[i] > arr[i - 1]) ++currValue;
		else currValue = 1;

		if (maxValue < currValue) maxValue = currValue;
	}

	cout << maxValue;

	return 0;
}

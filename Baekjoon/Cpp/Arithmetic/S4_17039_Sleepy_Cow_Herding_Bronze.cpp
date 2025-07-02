#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17039 Sleepy Cow Herding (Bronze)
	// 수학
	int arr[3] = { 0 };
	for (int i = 0; i < 3; ++i) cin >> arr[i];
	sort(arr, arr + 3);

	int minValue = 3;
	int maxValue = -1;

	// 최솟값
	if (arr[2] - arr[0] == 2) minValue = 0;
	else if (arr[2] - arr[1] == 2 || arr[1] - arr[0] == 2) minValue = 1;
	else minValue = 2;

	// 최댓값
	maxValue = max(arr[2] - arr[1], arr[1] - arr[0]) - 1;

	cout << minValue << '\n' << maxValue;

	return 0;
}

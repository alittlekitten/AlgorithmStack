#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10093 숫자
	// 구현
	long long arr[2];
	cin >> arr[0] >> arr[1];
	sort(arr, arr + 2);
	if (arr[1] - arr[0] > 1) {
		cout << arr[1] - arr[0] - 1 << '\n';
		for (long long i = arr[0] + 1; i < arr[1]; ++i) cout << i << " ";
	}
	else {
		cout << 0;
	}

	return 0;
}

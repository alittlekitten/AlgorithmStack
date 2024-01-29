#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2947 나무 조각
	// 정렬
	int arr[6] = { 0 };
	for (int i = 0; i < 5; ++i) cin >> arr[i];

	for (int i = 4; i >= 0; --i) {
		for (int j = 0; j < i; ++j) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				for (int k = 0; k < 5; ++k) cout << arr[k] << " ";
				cout << '\n';
			}
		}
	}

	return 0;
}

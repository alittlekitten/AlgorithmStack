#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1813 논리학 교수
	// 애드혹
	int n, input;
	int arr[51] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		arr[input]++;
	}

	for (int i = 50; i >= 0; --i) {
		if (arr[i] == i) {
			cout << i;
			return 0;
		}
	}
	cout << -1;

	return 0;
}

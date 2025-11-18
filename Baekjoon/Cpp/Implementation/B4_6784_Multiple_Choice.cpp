#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6784 Multiple Choice
	// 구현
	int n;
	char arr[10000];
	char arr2[10000];
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> arr2[i];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] == arr2[i]) ++ans;
	}

	cout << ans;

	return 0;
}

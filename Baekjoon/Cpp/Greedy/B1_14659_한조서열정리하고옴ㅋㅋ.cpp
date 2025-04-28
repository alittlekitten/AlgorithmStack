#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14659 한조서열정리하고옴ㅋㅋ
	// 그리디
	int n, input;
	int arr[30001] = { 0 };
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	int ans = -1;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (v[i] > v[j]) ++arr[i];
			else break;
		}
		ans = max(arr[i], ans);
	}
	cout << ans;

	return 0;
}

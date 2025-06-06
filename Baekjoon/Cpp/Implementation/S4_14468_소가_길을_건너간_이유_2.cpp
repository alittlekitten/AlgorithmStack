#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14468 소가 길을 건너간 이유 2
	// 구현
	string s;
	pair<int, int> arr[26];
	cin >> s;
	for (int i = 0; i < 52; ++i) {
		int tmp = s[i] - 'A';
		if (arr[tmp].first == 0) arr[tmp].first = i + 1;
		else arr[tmp].second = i + 1;
	}

	int ans = 0;
	for (int i = 0; i < 26; ++i) {
		for (int j = 0; j < 26; ++j) {
			if (arr[i].first < arr[j].first && arr[j].first < arr[i].second && arr[i].second < arr[j].second) ++ans;
		}
	}
	cout << ans;

	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1427 소트인사이드
	// 정렬

	int n;
	cin >> n;
	string tmp = to_string(n);
	sort(tmp.begin(), tmp.end(), greater<>());
	cout << tmp;

	return 0;
}

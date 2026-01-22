#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20336 Haughty Cuisine
	// 문자열
	int n, d, tmp;
	string s;
	string arr[42];
	cin >> n >> d;
	for (int i = 0; i < d; ++i) cin >> arr[i];

	for (int i = 1; i < n; ++i) {
		cin >> tmp;
		for (int j = 0; j < tmp; ++j) cin >> s;
	}

	cout << d << '\n';
	for (int i = 0; i < d; ++i) cout << arr[i] << '\n';

	return 0;
}

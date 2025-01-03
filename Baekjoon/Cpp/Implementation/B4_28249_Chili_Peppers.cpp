#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28249 Chili Peppers
	// 구현
	int n;
	string s;
	map<string, int> m = {
		{"Poblano", 1500},
		{"Mirasol", 6000},
		{"Serrano", 15500},
		{"Cayenne", 40000},
		{"Thai", 75000},
		{"Habanero", 125000}
	};

	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		ans += m[s];
	}

	cout << ans;

	return 0;
}

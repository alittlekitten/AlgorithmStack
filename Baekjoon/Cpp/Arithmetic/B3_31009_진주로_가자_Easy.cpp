#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31009 진주로 가자! (Easy)
	// 수학
	int n, c;
	string d;
	int arr[1001] = { 0 };
	cin >> n;

	int target = -1;
	for (int i = 0; i < n; ++i) {
		cin >> d >> c;
		if (d == "jinju") target = c;
		arr[i] = c;
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (target < arr[i]) ++ans;
	}
	
	cout << target << '\n' << ans;

	return 0;
}

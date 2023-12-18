#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10822 더하기
	// 문자열
	string k, ans;
	int sum = 0;
	cin >> k;
	for (int i = 0; i < k.size(); ++i) {
		if (k[i] == ',') {
			sum += stoi(ans);
			ans = "";
		}
		else ans += k[i];
	}
	cout << sum + stoi(ans) << '\n';

	return 0;
}

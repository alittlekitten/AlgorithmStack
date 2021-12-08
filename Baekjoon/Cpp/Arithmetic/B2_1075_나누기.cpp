#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string answer;
	
	int n, f;
	cin >> n >> f;
	n = n / 100 * 100;
	for (int i = 0; i < 100; ++i) {
		int tmp = n + i;
		if (tmp % f == 0) {
			if (i < 10) answer += '0';
			answer += to_string(i);
			break;
		}
	}
	cout << answer;

	return 0;
}

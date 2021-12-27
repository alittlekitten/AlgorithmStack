#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1568 
	int n;
	cin >> n;

	int answer = 0;
	int tmp = 1;
	while (n) {
		if (n >= tmp) {
			n -= tmp;
			tmp++;
			answer++;
		}
		else tmp = 1;

	}

	cout << answer;
	
	
	return 0;
}

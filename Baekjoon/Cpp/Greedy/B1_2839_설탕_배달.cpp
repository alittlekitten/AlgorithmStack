#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	bool chk = false;
	cin >> n;

	int cnt = 0;
	while (n >= 0) {
		if (n % 5 == 0) {
			cnt += n / 5;
			chk = true;
			break;
		}
		else {
			n -= 3;
			cnt++;
		}
	}
	if (chk == true) cout << cnt;
	else cout << -1;
	return 0;
	
}

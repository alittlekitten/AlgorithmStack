#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5585 거스름돈
	// 그리디
	int n;
	cin >> n;
	int ans = 0;
	int target = 1000 - n;
	while (target >= 500) {
		target -= 500;
		++ans;
	}
	while (target >= 100) {
		target -= 100;
		++ans;
	}
	while (target >= 50) {
		target -= 50;
		++ans;
	}
	while (target >= 10) {
		target -= 10;
		++ans;
	}
	while (target >= 5) {
		target -= 5;
		++ans;
	}
	cout << ans + target;
	
	return 0;
}    

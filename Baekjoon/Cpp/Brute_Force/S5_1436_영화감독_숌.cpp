#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// 무지성 브루트포스
	int n;
	int cnt = 0;
	int num = 0;
	cin >> n;
	while (cnt != n) {
		num++;
		if (to_string(num).find("666") != string::npos) cnt++;// -1을 반환하는게 아니라 npos를 반환한다!
	}
	
	cout << num;

	return 0;
}

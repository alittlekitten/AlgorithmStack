#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31712 핑크빈 레이드
	// 브루트포스
	int cu, du, cd, dd, cp, dp, h;
	cin >> cu >> du >> cd >> dd >> cp >> dp >> h;

	h -= du + dd + dp;
	int t = 0;

	while (h > 0) {
		++t;
		if (!(t % cu)) h -= du;
		if (!(t % cd)) h -= dd;
		if (!(t % cp)) h -= dp;
	}

	cout << t;

	return 0;
}

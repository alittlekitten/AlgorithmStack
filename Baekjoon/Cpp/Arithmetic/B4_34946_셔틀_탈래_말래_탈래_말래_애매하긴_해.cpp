#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34946 셔틀 탈래 말래 탈래 말래 애매하긴 해
	// 수학
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b <= d && c <= d) cout << "~.~";
    else if (a + b > d && c > d) cout << "T.T";
    else if (a + b <= d) cout << "Shuttle";
    else cout << "Walk";

	return 0;
}

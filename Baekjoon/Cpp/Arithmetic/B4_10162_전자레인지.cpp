#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10162 전자레인지
    // 수학
	int a, b, c, t;
	cin >> t;

	if (t % 10 != 0) cout << -1;
	else {
		a = t / 300;
		b = (t % 300) / 60;
		c = ((t % 300) % 60) / 10;
		cout << a << " " << b << " " << c;
	}

    return 0;
}

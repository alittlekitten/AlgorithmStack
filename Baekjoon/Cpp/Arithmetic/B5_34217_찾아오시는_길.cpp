#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34217 찾아오시는 길
	// 수학
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a + c > b + d) cout << "Yongdap";
	else if (a + c < b + d) cout << "Hanyang Univ.";
	else cout << "Either";

	return 0;
}

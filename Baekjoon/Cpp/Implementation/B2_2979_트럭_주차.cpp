#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2979 트럭 주차
    // 구현
    int a, b, c, s, e;
    int arr[101] = { 0 };
    int ans = 0;
    cin >> a >> b >> c;

    for (int i = 0; i < 3; ++i) {
        cin >> s >> e;
        for (int j = s; j < e; ++j) ++arr[j];
    }

    for (int i = 1; i <= 100; ++i) {
        if (arr[i] == 1) ans += arr[i] * a;
        else if (arr[i] == 2) ans += arr[i] * b;
        else ans += arr[i] * c;
    }
    cout << ans;

	return 0;
}

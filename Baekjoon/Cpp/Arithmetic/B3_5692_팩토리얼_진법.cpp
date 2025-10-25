#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5692 팩토리얼 진법
	// 수학
    int x;
    while(1) {
        cin >> x;
        if (!x) break;
        int cnt = 1;
        int num = 1;
        int sum = 0;

        while (x > 0) {
            sum += (x % 10) * num;
            x /= 10;
            num *= ++cnt;
        }
        cout << sum << '\n';
    }

	return 0;
}

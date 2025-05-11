#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2828 사과 담기 게임
	// 구현
    int n, m, j, input;
    cin >> n >> m >> j;
    int ans = 0;
    int start = 1;
    int end = m;

    while (j--) {
        cin >> input;
        while (1) {
            if (start <= input && input <= end) break;
            else if (start > input) {
                --start;
                --end;
                ++ans;
            }
            else {
                ++start;
                ++end;
                ++ans;
            }
        }
    }

    cout << ans;

	return 0;
}

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10419 지각
    // 수학
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        int tmp = 0;
        while (1) {
            if (input - tmp - tmp * tmp >= 0) ++tmp;
            else break;
        }
        cout << tmp - 1 << '\n';
    }

	return 0;
}

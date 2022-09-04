#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 9325 얼마?
    // 수학
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int s;
        cin >> s;
        int n;
        cin >> n;
        for (int j = 0; j < n; ++j) {
            int q, p;
            cin >> q >> p;
            s += (q * p);
        }
        cout << s << '\n';
    }

	return 0;
}

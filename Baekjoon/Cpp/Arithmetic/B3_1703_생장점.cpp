#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1703 생장점
    // 수학
    int a;
    while (1) {
        cin >> a;
        if (!a) break;
        vector<int> v(a * 2);
        int leaves = 1;
        for (int i = 0; i < 2 * a; i++) cin >> v[i];
        for (int i = 0; i < a; i++) {
            int tmp = v[i * 2];
            int tmp2 = v[i * 2 + 1];
            leaves = leaves * tmp - tmp2;
        }
        cout << leaves << '\n';
    }

	return 0;
}

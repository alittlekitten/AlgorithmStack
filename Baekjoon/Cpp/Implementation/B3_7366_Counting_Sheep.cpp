#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7366 Counting Sheep
	// 구현
    int n, m;
    string s;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> m;

        int cnt = 0;
        for (int j = 0; j < m; ++j) {
            cin >> s;
            if (s == "sheep") ++cnt;
        }

        cout << "Case " << i << ": This list contains " << cnt << " sheep. \n\n";
    }

	return 0;
}

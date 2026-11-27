#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27160 할리갈리
	// 해시
    int n;
    cin >> n;

    map<string, int> m;
    for (int i = 0; i < n; ++i) {
        string s;
        int cnt;
        cin >> s >> cnt;
        m[s] += cnt;
    }

    for (auto [_, cnt] : m) {
        if (cnt == 5) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

	return 0;
}

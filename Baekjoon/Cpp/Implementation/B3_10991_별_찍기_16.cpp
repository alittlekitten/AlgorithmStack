#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10991 별 찍기 - 16
    // 구현
	int n;
	cin >> n;

	for (int i = 1;i <= n; ++i) {
		for (int j = n - 1; j >= i; --j) cout << " ";
		for (int j = 1; j <= i; ++j) cout << "* ";
		cout << '\n';
	}

    return 0;
}

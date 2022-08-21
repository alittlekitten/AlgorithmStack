#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2921 도미노
	  // 구현
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= i; ++j) sum += j + i;
    }
    cout << sum << '\n';

	  return 0;
}

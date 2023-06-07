#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5724 파인만
  // 수학
  int n;
  while (1) {
      cin >> n;
      if (!n) break;
      int ans = 0;
      ans += n * n + 1;
      for (int i = 2; i <= n - 1; ++i) ans += i * i;
      if (n != 1) cout << ans << '\n';
      else cout << 1 << '\n';
  }

	return 0;
}

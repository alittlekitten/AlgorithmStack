#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14563 완전수
  // 수학
  int t, n;
  cin >> t;

  for (int i = 0; i < t; ++i) {
      int ans = 0;
      cin >> n;
      for (int j = 1; j < n; ++j) {
          if (n % j == 0) ans += j;
      }
      if (ans == n) cout << "Perfect\n";
      else if (ans > n) cout << "Abundant\n";
      else cout << "Deficient\n";
  }

	return 0;
}

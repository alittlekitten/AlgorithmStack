#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4504 배수 찾기
  // 수학
  int n, a;
  cin >> n;

  while (1) {
      cin >> a;

      if (a == 0) break;

      if (a % n == 0) cout << a << " is a multiple of " << n << ".\n";
      else cout << a << " is NOT a multiple of " << n << ".\n";
  }

	return 0;
}

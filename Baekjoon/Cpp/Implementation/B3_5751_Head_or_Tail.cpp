#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5751 Head or Tail
	// 구현
	int n;
	while (1) {
		cin >> n;
		if (n) {
			int h = 0;
			int t = 0;
			int input;
			for (int i = 0; i < n; ++i) {
				cin >> input;
				if (input) ++t;
				else ++h;
			}
			cout << "Mary won " << h << " times and John won " << t << " times\n";
		}
		else break;
	}
	
	return 0;
}

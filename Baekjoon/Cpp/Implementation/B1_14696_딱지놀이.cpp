#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14696 딱지놀이
	// 구현
	int n;
	cin >> n;

	while (n--) {
		int Aarr[5] = { 0 };
		int Barr[5] = { 0 };

		int a, b, shape;
		cin >> a;
		for (int i = 0; i < a; ++i) {
			cin >> shape;
			++Aarr[shape];
		}

		cin >> b;
		for (int i = 0; i < b; ++i) {
			cin >> shape;
			++Barr[shape];
		}

		string ans = "D";
		for (int i = 4; i >= 1; --i) {
			if (Aarr[i] > Barr[i]) {
				ans = "A";
				break;
			}
			else if (Aarr[i] < Barr[i]) {
				ans = "B";
				break;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4564 숫자 카드놀이
	// 수학
	int s;
	while (1) {
		cin >> s;
		if (s == 0) break;

		int tmp = 1;
		while (to_string(s).size() != 1) {
			cout << s << " ";
			for (int i = 0; i < to_string(s).size(); ++i) {
				tmp *= (int)to_string(s)[i] - '0';
			}
			s = tmp;
			tmp = 1;
		}
		cout << s << '\n';
	}

	return 0;
}

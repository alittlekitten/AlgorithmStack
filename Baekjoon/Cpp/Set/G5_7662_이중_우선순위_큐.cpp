#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long t, k, n;
	char sign;

	cin >> t;

	for (int i = 0; i < t; ++i) {
		multiset<long long> ms;

		cin >> k;
		for (int j = 0; j < k; ++j) {
			cin >> sign >> n;
			if (sign == 'I') ms.insert(n);
			else if (sign == 'D') {
				if (ms.size() && n == 1) ms.erase(--ms.end());
				else if (ms.size() && n == -1) ms.erase(ms.begin());
			}
		}
		if (!ms.size()) cout << "EMPTY" << '\n';
		else cout << *--ms.end() << " " << *ms.begin() << '\n';
	}

	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9506 약수들의 합
	// 수학
	while (1) {
		int n;
		vector<int> v;
		int sum = 0;
		cin >> n;
		if (n == -1) break;

		for (int i = 1; i < n; ++i) {
			if (n % i == 0) v.push_back(i);
		}

		for (int i = 0; i < v.size(); ++i) sum += v[i];

		if (n == sum) {
			cout << n << " = ";
			for (int i = 0; i < v.size(); ++i) {
				if (i == v.size() - 1) cout << v[i];
				else cout << v[i] << " + ";
			}
			cout << '\n';
		}
		else cout << n << " is NOT perfect.\n";
	}

	return 0;
}

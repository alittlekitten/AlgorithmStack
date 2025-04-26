#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1225 이상한 곱셈
	// 수학
	string a, b;
	long long sum = 0;
	cin >> a >> b;
	for (int i = 0; i < a.size(); ++i) {
		for (int j = 0; j < b.size(); ++j) sum += (int)(a[i] - 48) * (int)(b[j] - 48);
	}
	cout << sum;

	return 0;
}

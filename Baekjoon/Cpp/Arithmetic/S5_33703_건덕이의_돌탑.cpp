#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33703 건덕이의 돌탑
	// 수학
    long long n;
    cin >> n;
    cout << n * (n + 1) / 2;

	return 0;
}

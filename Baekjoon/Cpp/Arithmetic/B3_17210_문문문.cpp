#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17210 문문문
	// 수학
    long long n;
    int a;
    cin >> n >> a;
    if (n > 5) cout << "Love is open door";
    else {
        for (int i = 1; i < n; ++i) {
            a = 1 - a;
            cout << a << '\n';
        }
    }

	return 0;
}

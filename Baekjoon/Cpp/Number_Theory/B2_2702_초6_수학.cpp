#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2702 초6 수학
    // 수학, 정수론
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        cout << a * b / gcd(a, b) << " " << gcd(a, b) << '\n';
    }

	return 0;
} 

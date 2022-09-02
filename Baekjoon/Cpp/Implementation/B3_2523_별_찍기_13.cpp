#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2523 별 찍기 - 13
    // 구현
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << "*";
        cout << '\n';
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) cout << "*";
        cout << '\n';
    }

	return 0;
}

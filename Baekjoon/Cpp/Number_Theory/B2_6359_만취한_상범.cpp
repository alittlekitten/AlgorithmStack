#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 6359 만취한 상범
    // 구현, 정수론
    // 제곱수의 개수
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        for (int j = 10; j > 0; --j) {
            if (j * j <= input) {
                cout << j << '\n';
                break;
            }
        }
    }

	return 0;
}

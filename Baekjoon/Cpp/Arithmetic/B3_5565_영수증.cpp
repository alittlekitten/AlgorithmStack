#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5565 영수증
    // 수학
    int n, input;
    cin >> n;
    for (int i = 0; i < 9; ++i) {
        cin >> input;
        n -= input;
    }

    cout << n;

    return 0;
}

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 7891 Can you add this?
    // 수학
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}

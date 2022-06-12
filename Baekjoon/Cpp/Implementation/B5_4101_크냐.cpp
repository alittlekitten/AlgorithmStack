#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 4101 크냐?
    // 수학
    int a, b;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (a > b) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}

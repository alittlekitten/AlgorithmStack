#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15917 노솔브 방지문제야!!!
    // 수학
    int q, input;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> input;
        if ((input & (-input)) == input) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}

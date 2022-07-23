#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10886 0 = not cute / 1 = cute
    // 구현
    int n, input;
    int t = 0;
    int f = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input) ++t;
        else ++f;
    }
    if (t > f) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";

    return 0;
}

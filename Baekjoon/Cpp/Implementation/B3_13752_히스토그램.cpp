#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 13752 히스토그램
    // 구현
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        for (int j = 0; j < input; ++j) {
            cout << '=';
        }
        cout << '\n';
    }

    return 0;
}

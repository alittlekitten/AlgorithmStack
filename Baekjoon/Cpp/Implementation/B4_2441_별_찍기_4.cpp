#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2441 별 찍기 - 4
    // 구현

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string str = "";
        for (int j = 0; j < i; ++j) {
            str += ' ';
        }
        for (int j = n - i; j > 0; --j) {
            str += '*';
        }
        cout << str << '\n';
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15781 헬멧과 조끼
    // 수학
    int n, m, input;
    cin >> n >> m;
    int nmax = 0;
    int mmax = 0;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (nmax < input) nmax = input;
    }
    for (int j = 0; j < m; ++j) {
        cin >> input;
        if (mmax < input) mmax = input;
    }
    cout << nmax + mmax;

    return 0;
}

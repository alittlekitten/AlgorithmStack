#include <iostream>
using namespace std;

int v[100];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10807 개수 세기
    // 수학
    int n, target;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cin >> target;
    for (int i = 0; i < n; ++i) {
        if (v[i] == target) ++ans;
    }

    cout << ans;

    return 0;
}

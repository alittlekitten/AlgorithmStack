#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1453 피시방 알바
    // 구현
    bool seats[101] = { 0 };
    int n, input;
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (!seats[input]) seats[input] = true;
        else ++cnt;
    }
    cout << cnt;

    return 0;
}

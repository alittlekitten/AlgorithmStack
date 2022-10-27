#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 14909 양수 개수 세기
    // 구현
    int cnt = 0;
    int n;
    while (1) {
        cin >> n;
        if (cin.eof()) break;
        if (n > 0) ++cnt;
    }

    cout << cnt;

    return 0;
}

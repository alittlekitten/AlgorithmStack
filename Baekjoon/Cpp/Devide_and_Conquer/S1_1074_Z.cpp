#include <iostream>
using namespace std;

int cnt = 0;

void dq(int x, int y, int r, int c, int a) {
    // 찾았으면
    if (x == c && y == r) {
        cout << cnt;
        return;
    }

    // 해당 사분면에 있으면
    if (c < x + a && c >= x && r < y + a && r >= y) {
        dq(x, y, r, c, a / 2);
        dq(x + a / 2, y, r, c, a / 2);
        dq(x, y + a / 2, r, c, a / 2);
        dq(x + a / 2, y + a / 2, r, c, a / 2);
    }
    else {
        cnt += a * a;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 분할정복
    int n, r, c;
    cin >> n >> r >> c;
    
    dq(0, 0, r, c, 1 << n);
    return 0;
}

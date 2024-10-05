#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 32369 분수찾기
    // 수학
    int n, a, b;
    cin >> n >> a >> b;
    
    int x = 1;
    int y = 1;
    int chk = false;
    
    while (n--) {
        if (chk) {
            x += b;
            y += a;
        }
        else {
            x += a;
            y += b;
        }
        
        if (x == y) {
            if (!chk) --y;
            else --x;
        }
        else if (((x < y) && !chk) || ((x > y) && chk)) chk = !chk;
    }
    
    if (x > y) cout << x << " " << y;
    else cout << y << " " << x;

    return 0;
}

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 25625 샤틀버스
    // 수학
    
    int x, y;
    cin >> x >> y;
    if (x < y) cout << y - x;
    else cout << x + y;

    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 5543 상근날드
    // 수학

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    int minBug = min(a, min(b, c));
    int minDrink = min(d, e);

    cout << minBug + minDrink - 50;

    return 0;
}

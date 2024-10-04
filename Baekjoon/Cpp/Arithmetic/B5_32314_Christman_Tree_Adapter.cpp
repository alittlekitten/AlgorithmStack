#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	  // 32314 Christmas Tree Adapter
    // 수학
    int a, w, v;
    cin >> a >> w >> v;

    if (a * v <= w) cout << 1;
    else cout << 0;

    return 0;
}

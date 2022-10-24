#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1310 ISBN
    // 수학
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The 1-3-sum is " << 91 + a + b * 3 + c;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	  // 2525 오븐 시계
    // 수학
    int a, b, input;
    cin >> a >> b >> input;
    cout << (a + (b + input) / 60) % 24 << " " << (b + input) % 60;

    return 0;
}

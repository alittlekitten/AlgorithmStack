#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10178 할로윈의 사탕
    // 수학
    int n, c, v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c >> v;
        cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
    }

	return 0;
} 

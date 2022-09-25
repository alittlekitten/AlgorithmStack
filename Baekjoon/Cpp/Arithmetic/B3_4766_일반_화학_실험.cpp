#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 4766 일반 화학 실험
    // 수학
    double d;
    cin >> d;
    double save = d;
    cout << fixed;
    cout.precision(2);
    while (1) {
        cin >> d;
        if (d == 999) break;
        cout << d - save << '\n';
        save = d;
    }

    return 0;
}

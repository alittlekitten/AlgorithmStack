#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 16486 운동장 한 바퀴;
    // 수학

    double d1, d2;
    cout << fixed;
    cout.precision(6);
    cin >> d1 >> d2;
    cout << d1 * 2 + d2 * 3.14159258 * 2;

    return 0;
}

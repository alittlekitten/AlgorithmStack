#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 3053 택시 기하학
    // 기하학
    double r;
    double pi = 3.14159265358979;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * pi << '\n';
    cout << r * r * 2 << '\n';

    return 0;
}

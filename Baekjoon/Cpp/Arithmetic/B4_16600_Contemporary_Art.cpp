#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 16600 Contemporary Art
    // 수학
    double n;
    cin >> n;
    double tmp = sqrt(n);
    cout << fixed;
    cout.precision(8);
    cout << tmp * 4;

	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 17356 욱 제
    // 수학
    double n, m;
    cin >> n >> m;
    
    cout << 1.0 / (1 + pow(10, (m - n) / 400));

    return 0;
}

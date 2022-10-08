#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2460 지능형 기차 2
    // 수학

    int a, b;
    int max = 0;
    int now = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> a >> b;
        now += b - a;
        if (max < now) max = now;
    }
    cout << max;
  
    return 0;
}

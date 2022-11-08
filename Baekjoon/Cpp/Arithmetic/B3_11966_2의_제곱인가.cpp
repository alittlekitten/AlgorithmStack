#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11966 2의 제곱인가?
    // 수학
    int n;
    cin >> n;
    int target = 1;
    if (n == 1) cout << 1;
    else {
        while (target < n) target *= 2;
        if (target == n) cout << 1;
        else cout << 0;
    }
    return 0;
}

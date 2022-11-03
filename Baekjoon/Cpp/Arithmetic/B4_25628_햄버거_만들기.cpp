#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 25628 햄버거 만들기
    // 수학
    int a, b;
    cin >> a >> b;
    cout << min(a / 2, b);

    return 0;
}

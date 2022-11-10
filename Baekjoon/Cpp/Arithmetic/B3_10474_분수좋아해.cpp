#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 10474 분수좋아해?
    // 수학
    int a, b;
    while(1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << a / b << " " << a % b << " / " << b << '\n';
    }
    
    return 0;
}

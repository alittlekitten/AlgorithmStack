#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10768 특별한 날
    // 구현
    int a, b;
    cin >> a >> b;
    if (a < 2) cout << "Before";
    else if (a > 2) cout << "After";
    else {
        if (b < 18) cout << "Before";
        else if (b > 18) cout << "After";
        else cout << "Special";
    }

    return 0;
}

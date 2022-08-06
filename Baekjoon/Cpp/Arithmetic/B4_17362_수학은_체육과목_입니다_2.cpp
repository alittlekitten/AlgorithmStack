#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 17362 수학은 체육과목 입니다 2
    // 수학
    int n;
    cin >> n;
    if (n % 8 == 1) cout << 1;
    else if (n % 8 == 2 || n % 8 == 0) cout << 2;
    else if (n % 8 == 3 || n % 8 == 7) cout << 3;
    else if (n % 8 == 4 || n % 8 == 6) cout << 4;
    else if (n % 8 == 5) cout << 5;

    return 0;
}

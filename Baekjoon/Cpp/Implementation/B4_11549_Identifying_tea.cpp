#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 11549 Identifying tea
    // 구현

    int ans, input;
    int sum = 0;
    cin >> ans;
    for (int i = 0; i < 5; ++i) {
        cin >> input;
        if (input == ans) ++sum;
    }

    cout << sum;

    return 0;
}

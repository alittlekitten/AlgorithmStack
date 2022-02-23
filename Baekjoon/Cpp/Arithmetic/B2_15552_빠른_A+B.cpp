#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15552 빠른 A+B
    // 수학

    int t;
    int input1, input2;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> input1 >> input2;
        cout << input1 + input2 << '\n';
    }

    return 0;
}

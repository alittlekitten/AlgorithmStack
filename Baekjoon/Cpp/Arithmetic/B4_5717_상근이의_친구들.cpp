#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 5717 상근이의 친구들
    // 수학
    int input1, input2;
    while(1) {
        cin >> input1 >> input2;
        if (input1 == 0) break;
        cout << input1 + input2 << '\n';
    }

    return 0;
}

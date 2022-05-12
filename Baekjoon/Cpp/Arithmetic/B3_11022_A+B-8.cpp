#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	  // 11022 A+B - 8
    // 수학

    int n, input1, input2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input1 >> input2;
        cout << "Case #" << i + 1 << ": " << input1 << " + " << input2 << " = " << input1 + input2 << '\n';
    }

    return 0;
}

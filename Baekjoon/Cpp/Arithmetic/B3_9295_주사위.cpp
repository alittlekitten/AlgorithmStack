#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 9295 주사위
    // 숫자
    int n, input1, input2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input1 >> input2;
        cout << "Case " << i + 1 << ": " << input1 + input2 << '\n';
    }

	return 0;
}

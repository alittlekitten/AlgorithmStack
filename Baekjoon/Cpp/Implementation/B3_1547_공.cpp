#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1547 공
    // 구현
    int target = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (a == target) target = b;
        else if (b == target) target = a;
    }

    cout << target;

	return 0;
}

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10990 별 찍기 - 15
    // 구현
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) cout << " ";
        cout << "*";
        for (int j = 0; j < 2 * i - 1; j++) cout << " ";
        if (i != 0) cout << "*";
        cout << '\n';
    }

	  return 0;
}

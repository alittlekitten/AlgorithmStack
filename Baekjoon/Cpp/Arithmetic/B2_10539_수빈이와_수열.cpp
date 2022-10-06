#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[101] = { 0 };
    int b[101] = { 0 };

    // 10539 수빈이와 수열
    // 수학
    int n;
    int tmp = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }

    for (int i = 1; i <= n; ++i) {
        tmp += a[i - 1];
        a[i] = b[i] * i - tmp;
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
  
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ans = 0;

    int n;
    cin >> n;

    // n까지 중에서 5가 몇번 곱해졌는지 확인 (2는 어짜피 5보다는 많을테니..)
    for (int i = 5; i <= n; i *= 5)
        ans += n / i;

    cout << ans << '\n';

    return 0;
}

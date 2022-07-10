#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 19602 Dog Treats
    // 수학
    int s, m, l;
    cin >> s >> m >> l;
    if (s + 2 * m + 3 * l >= 10) cout << "happy";
    else cout << "sad";

    return 0;
}
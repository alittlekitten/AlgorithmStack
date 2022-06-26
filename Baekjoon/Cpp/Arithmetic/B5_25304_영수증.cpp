#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 25304 영수증
    // 수학
    int x, n, input1, input2;
    int sum = 0;
    cin >> x >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input1 >> input2;
        sum += input1 * input2;
    }
    if (x != sum) cout << "No";
    else cout << "Yes";

    return 0;
}

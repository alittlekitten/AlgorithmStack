#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 16099 Larger Sport Facility
    // 수학
    int n;
    long long a, b, c, d;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c >> d;
        if (a * b > c * d) {
            cout << "TelecomParisTech\n";
        }
        else if (a * b < c * d) {
            cout << "Eurecom\n";
        }
        else {
            cout << "Tie\n";
        }
    }

    return 0;
}

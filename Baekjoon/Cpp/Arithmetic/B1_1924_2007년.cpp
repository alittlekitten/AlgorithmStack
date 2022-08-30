#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1924 2007년
    // 수학
    int m, d;
    cin >> m >> d;
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int cnt = d;
    for (int i = 0; i < m - 1; ++i) cnt += days[i];
    
    if (cnt % 7 == 0) cout << "SUN";
    else if (cnt % 7 == 1) cout << "MON";
    else if (cnt % 7 == 2) cout << "TUE";
    else if (cnt % 7 == 3) cout << "WED";
    else if (cnt % 7 == 4) cout << "THU";
    else if (cnt % 7 == 5) cout << "FRI";
    else if (cnt % 7 == 6) cout << "SAT";

	return 0;
}

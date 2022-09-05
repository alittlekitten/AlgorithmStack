#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 3058 짝수를 찾아라
    // 수학
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int evenSum = 0;
        int minEven = 101;
        for (int j = 0; j < 7; ++j){
            int tmp;
            cin >> tmp;
            if (tmp % 2 == 0) {
                evenSum += tmp;
                if (tmp < minEven) minEven = tmp;
            }
        }
        cout << evenSum << " " << minEven << '\n';
    }

    return 0;
}

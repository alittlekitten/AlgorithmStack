#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2566 최댓값
    // 수학
    int n;
    int r, c;
    int maxNum = -1;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> n;
            if (n > maxNum) {
                maxNum = n;
                r = i + 1;
                c = j + 1;
            }
        }
    }
    cout << maxNum << '\n';
    cout << r << " " << c;
    
    return 0;
}

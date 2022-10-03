#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5054 주차의 신
    // 수학
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        vector<int> v;
        cin >> n;
        for (int j = 0; j < n; ++j) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        cout << (v[n - 1] - v[0]) * 2 << '\n';
    }

    return 0;
}

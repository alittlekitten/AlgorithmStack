#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 10만 * 10만..? 너무 크면 이분탐색을 생각하자!
    // ... cin때문에 시간초과였다..
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, input;
    vector<int> v;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    cin >> m;
    bool chk = false;
    int min = 0;
    int max = n - 1;
    int mid;

    for (int i = 0; i < m; ++i) {
        min = 0;
        max = n - 1;
        chk = false;
        cin >> input;
        while (min <= max) {
            mid = (min + max) / 2;
            if (v[mid] < input) min = mid + 1;
            else if (v[mid] > input) max = mid - 1;
            else if (v[mid] == input) {
                chk = true;
                break;
            }
        }
        if (chk == true) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    
    return 0;
}

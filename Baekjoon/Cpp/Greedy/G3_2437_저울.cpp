#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2437 저울
    // 그리디
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (sum + 1 < v[i]) break;
        sum += v[i];
    }
    cout << sum + 1;

    return 0;
}

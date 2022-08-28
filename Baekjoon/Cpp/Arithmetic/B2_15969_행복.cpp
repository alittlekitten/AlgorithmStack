#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15969 행복
    // 수학
    vector<int> v;
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());
    cout << v[n - 1] - v[0];

	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // DP or Greedy (그리디가 더 쉬워보임)
    int n, k, input;
    int answer = 0;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }

    while (k != 0) {
        for (int i = n-1; i >= 0; --i) {
            if (v[i] <= k) {
                k -= v[i];
                answer++;
                break;
            }
        }
    }

    cout << answer;

    return 0;
}

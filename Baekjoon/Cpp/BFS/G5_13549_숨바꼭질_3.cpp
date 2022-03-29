#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int dp[100001];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 13549 숨바꼭질 3
    // bfs? 가장 빠르게 찾을 수 있는 곳부터 브루트포스?
    memset(dp, -1, sizeof(dp));
    int n, k;
    queue<int> q;
    cin >> n >> k;
    q.push(n);
    dp[n] = 0;
    while (!q.empty()) {
        int start = q.front();
        int target = start * 2;
        q.pop();
        while (target < 100001 && target != 0) {
            if (dp[target] == -1) {
                dp[target] = dp[start];
                q.push(target);
            }
            target *= 2;
        }
        if (start != 0 && dp[start - 1] == -1) {
            dp[start - 1] = dp[start] + 1;
            q.push(start - 1);
        }
        if (start != 100000 && dp[start + 1] == -1) {
            dp[start + 1] = dp[start] + 1;
            q.push(start + 1);
        }

        if (dp[k] != -1) {
            cout << dp[k];
            break;
        }
    }
    return 0;
}

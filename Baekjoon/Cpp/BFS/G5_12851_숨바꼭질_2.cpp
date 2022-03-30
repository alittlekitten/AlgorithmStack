#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int chk[100001]; // 방문 체크용

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 12851 숨바꼭질 2
    // bfs

    int n, k;
    int cnt = 0; // 최단경로의 수
    int ans = -1; // 최단시간
    queue<pair<int, int>> q; // 값, 시간

    cin >> n >> k;
    q.push(make_pair(n, 0));
    while (!q.empty()) {
        int pos = q.front().first;
        int time = q.front().second;
        chk[pos] = true;
        q.pop();

        // 빠른 종료조건
        if (cnt && time > ans) break;
        
        // 찾았을 때 동작
        if (cnt && ans == time && pos == k) cnt++;
        if (!cnt && pos == k) {
            ans = time;
            cnt++;
        }

        // 그 외 동작
        if (pos != 0 && !chk[pos - 1]) q.push(make_pair(pos - 1, time + 1));
        if (pos != 100000 && !chk[pos + 1]) q.push(make_pair(pos + 1, time + 1));
        if (pos != 0 && pos * 2 <= 100000 && !chk[pos * 2]) q.push(make_pair(pos * 2, time + 1));
    }

    cout << ans << " " << cnt;
   
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int parent[20001];
int dist[20001];

int getParent(int x) {
    // 자기 자신이면 그대로 리턴
    if (parent[x] == x) return x;
    // 거리 더해주기
    int idx = getParent(parent[x]);
    dist[x] += dist[parent[x]];
    parent[x] = idx;
    return idx;
}

void unionParent(int a, int b) {
    dist[a] = abs(a - b) % 1000;
    // B의 센터에 의해 제공됨
    parent[a] = b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 3780 네트워크 연결
    // union-find
    int t, a, b;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        for (int j = 1; j <= n; ++j) {
            parent[j] = j;
            dist[j] = 0;
        }
        char c;
        while (1) {
            cin >> c;
            // 종료
            if (c == 'O') break;
            // 거리출력
            else if (c == 'E') {
                cin >> a;
                getParent(a);
                cout << dist[a] << '\n';
            }
            // 유니온
            else if (c == 'I') {
                cin >> a >> b;
                unionParent(a, b);
            }
        }
    }

    return 0;
}

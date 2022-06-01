#include <iostream>
#include <algorithm>
using namespace std;

int parent[10001]; // 부모 담은 배열
bool v[10001]; // 방문여부 담은 배열

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 3584 가장 가까운 공통 조상;
    // 트리, LCA

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        // 배열들 초기화
        fill(parent, parent + 10001, 0);
        fill(v, v + 10001, 0);
        
        int n, a, b;
        cin >> n;
        for (int j = 0; j < n - 1; ++j) {
            cin >> a >> b;
            parent[b] = a;
        }
        cin >> a >> b;
        // a의 부모찾기
        v[a] = true;
        while (parent[a]) {
            a = parent[a];
            v[a] = true;
        }

        // b의 부모를 찾아 올라가면서 v[b]가 true면 해당 부분이 최초조상
        while (parent[b]) {
            b = parent[b];
            if (v[b]) break;
        }
        cout << b << '\n';
    }

    return 0;
}

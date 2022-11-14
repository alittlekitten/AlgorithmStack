#include <iostream>
using namespace std;

int parent[1000001];

int getParent(int x) {
    // 자기 자신이면 그대로 리턴
    if (parent[x] == x) return x;
    // 아니면 부모의 부모를 찾아봄
    return parent[x] = getParent(parent[x]);
}
void unionParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);
    // 더 낮은쪽이 parent
    if (a > b) parent[a] = b;
    else parent[b] = a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1717 집합의 표현
    // union-find
    int n, m;
    cin >> n >> m;

    // 초기화
    for (int i = 0; i < 1000001; ++i) {
        parent[i] = i;
    }

    int c, a, b;
    for (int i = 0; i < m; ++i) {
        cin >> c >> a >> b;
        if (c == 0) {
            unionParent(a, b);
        }
        else {
            if (getParent(a) == getParent(b)) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }

    return 0;
}

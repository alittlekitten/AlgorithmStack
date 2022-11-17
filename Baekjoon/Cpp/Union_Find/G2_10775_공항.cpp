#include <iostream>
#include <algorithm>
using namespace std;

int parent[100001];

int getParent(int x) {
    if (parent[x] == x) return x;
    return parent[x] = getParent(parent[x]);
}

void unionParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);
    parent[a] = b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10775 공항
    // union-find
    int G, P, g;
    cin >> G >> P;
    for (int i = 1; i <= G; ++i) {
        parent[i] = i;
    }

    int cnt = 0;
    for (int i = 0; i < P; ++i) {
        cin >> g;
        if (getParent(g) == 0) break;
        else {
            ++cnt;
            unionParent(getParent(g), getParent(g) - 1);
        }
    }
    cout << cnt;

    return 0;
}

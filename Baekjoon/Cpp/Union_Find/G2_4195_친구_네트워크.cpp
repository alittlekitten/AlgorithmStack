#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int parent[200000];
int friendNum[200000];

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
    if (a < b) {
        parent[b] = a;
        friendNum[a] += friendNum[b];
    }
    else if (a > b) {
        parent[a] = b;
        friendNum[b] += friendNum[a];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 4195 친구 네트워크
    // union-find
    int t, f;
    string s1, s2;
    map<string, int> m; // 인덱스용

    cin >> t;

    for (int i = 0; i < t; ++i) {
        m.clear();
        cin >> f;
        for (int j = 0; j < 200000; ++j) {
            parent[j] = j;
            friendNum[j] = 1;
        }
        int idx1, idx2;
        int idx = 0;
        for (int j = 0; j < f; ++j) {
            cin >> s1 >> s2;
            auto it = m.find(s1);
            if (it == m.end()) {
                m[s1] = idx;
                idx1 = idx;
                ++idx;
            }
            else idx1 = it->second;

            auto it2 = m.find(s2);
            if (it2 == m.end()) {
                m[s2] = idx;
                idx2 = idx;
                ++idx;
            }
            else idx2 = it2->second;

            unionParent(idx1, idx2);
            int target = getParent(idx1);
            cout << friendNum[target] << '\n';
        }
    }

    return 0;
}

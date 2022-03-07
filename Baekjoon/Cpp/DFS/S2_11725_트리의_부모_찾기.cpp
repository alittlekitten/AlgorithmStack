#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100001];
int parent[100001];

void dfs(int x) {
    for (int i = 0; i < v[x].size(); ++i) {
        int child = v[x][i];
        if (parent[child] == 0) { // 아직 부모 확인을 안했다면
            parent[child] = x; // 확인
            dfs(child);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11725 트리의 부모 찾기
    // 트리, DFS

    int n, input1, input2;
    cin >> n;

    for (int i = 1; i < n; ++i) {
        cin >> input1 >> input2;
        v[input1].push_back(input2);
        v[input2].push_back(input1);
    }

    parent[1] == -1;

    dfs(1);

    for (int i = 2; i <= n; ++i) {
        cout << parent[i] << '\n';
    }

    return 0;
}

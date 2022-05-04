#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int arr[32001]; // 진입차수
vector<int> v[32001]; // 연결된 점을 담은 벡터

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 2252 줄 세우기
	// 위상정렬
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        arr[b]++;
        v[a].push_back(b);
    }

    // 차수가 0인 친구들 큐에 삽입
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (arr[i] == 0) q.push(i);
    }
    
    // 큐에서 하나씩 빼면서 연결된 요소들의 차수도 1씩 빼주고 큐에 넣고를 반복한다
    while (!q.empty()) {
        int tmp = q.front();
        q.pop();
        cout << tmp << " ";

        for (int i = 0; i < v[tmp].size(); ++i) {
            if (--arr[v[tmp][i]] == 0) q.push(v[tmp][i]);
        }
    }

    return 0;
}

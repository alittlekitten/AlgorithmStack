#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
bool arr[101][101];
bool visit[101]; // 방문배열
int dist[101][101]; // 거리
vector<int> ans;

void fw(vector<int> group) {
    int size = group.size();

    // 1인 경우
    if (size == 1) {
        ans.push_back(group[0]);
        return;
    }

    // 거리배열 초기화
    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j < 101; ++j) {
            dist[i][j] = 0;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) dist[i][j] = 0; // 같은 위치 처리
            else if (arr[group[i]][group[j]] == true) dist[i][j] = 1; // 연결여부
            else dist[i][j] = 101; // 연결 안되있으면 101처리
        }
    }

    // 플로이드와샬
    for (int k = 0; k < size; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // 위원장 찾기
    int rep;
    int tmp = size + 1;

    // 돌면서 모든 요소에서 최소인 점 찾기
    for (int i = 0; i < size; i++) {
        int dis = 0;
        for (int j = 0; j < size; j++) {
            dis = max(dis, dist[i][j]);
        }
        if (dis < tmp) {
            tmp = dis;
            rep = group[i];
        }
    }
    ans.push_back(rep);
}

void bfs(int vertex) {
    vector<int> group; // 그룹
    queue<int> q; // bfs용 큐

    // 초기값 설정
    q.push(vertex);
    visit[vertex] = true;

    // bfs
    while (!q.empty()) {
        vertex = q.front();
        group.push_back(vertex);
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (visit[i] == true || arr[i][vertex] == false) continue;
            q.push(i);
            visit[i] = true;
        }
    }

    // 플로이드 와샬
    fw(group);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2610 회의준비
    // 플로이드와샬, bfs

    cin >> n >> m;

    // 연결 여부 체크
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = true;
        arr[b][a] = true;
    }

    // 돌면서 플와
    for (int i = 1; i <= n; i++) {
        if (!visit[i]) bfs(i);
    }

    // 정답 정렬
    sort(ans.begin(), ans.end());

    // 출력
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}

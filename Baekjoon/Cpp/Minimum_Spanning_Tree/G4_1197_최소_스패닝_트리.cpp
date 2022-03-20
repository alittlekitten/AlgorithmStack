#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int v, e;
vector<pair<int, int>> edges[10001];
bool visited[10001];

int solve() {
	// 어느 점에서 시작해도 되지만 1을 기준으로 선택(모든 점을 방문하는 MST이기 때문)
	// tuple은 pair의 확장판!! 접근할 때는 get<위치>(자료명) 형태로 접근 - 근데 굳이 tuple 사용하지 않아도 될듯..?
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 오름차순으로 정렬
	visited[1] = true; // 1부터 시작
	int cnt = 0; // 간선이 v-1개 되면 완료
	int ans = 0;
	for (int i = 0; i < edges[1].size(); ++i) { // pq에 1과 연결된 요소들 넣기
		pq.push(make_pair(edges[1][i].first, edges[1][i].second));
	}
	// cnt가 정점 - 1이 될 때까지 무한으로 돌리기
	while (1) {
		if (cnt == v - 1) break;
		int edgeCost = pq.top().first;
		int edge = pq.top().second;
		pq.pop();
		if (visited[edge]) continue;
		visited[edge] = true;
		for (int i = 0; i < edges[edge].size(); ++i) {
			pq.push(make_pair(edges[edge][i].first, edges[edge][i].second));
		}
		cnt++;
		ans += edgeCost;
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1197 최소 스패닝 트리
	// 그래프, 프림 알고리즘 (MST)
	int start, end, cost;
	cin >> v >> e;
	for (int i = 0; i < e; ++i) {
		cin >> start >> end >> cost;
		edges[start].push_back(make_pair(cost, end));
		edges[end].push_back(make_pair(cost, start));
	}
	cout << solve();

	return 0;
}

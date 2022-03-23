#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<pair<int, int>> edges[100001];
bool visited[100001];

int solve(int start) {
	// 어짜피 모든 길을 돌아야 하니까 1부터 시작
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 오름차순(유지비 낮은게 먼저 나옴)
	visited[start] = true;
	int cnt = 0; // 지나간 간선의 수
	int ans = 0; // 유지비의 합
	int maxCost = 0; // MST의 최대 코스트
	for (int i = 0; i < edges[start].size(); ++i) {
		pq.push(make_pair(edges[start][i].first, edges[start][i].second));
	}
	
	while (1) {
		if (cnt == n - 1) break; // cnt가 정점 - 2가 될 때까지 돌리기
		int edgeCost = pq.top().first; // pq에서 가장 유지비 낮은 요소 뽑아냄
		int edge = pq.top().second; // 그 간선과 연결된 점 뽑아냄
		pq.pop();
		if (visited[edge]) continue; // 이미 연결되어있으면 다시뽑음
		visited[edge] = true; // 아니라면 visited 체크 (채택)
		for (int i = 0; i < edges[edge].size(); ++i) { // 그 edge와 연결된 간선들을 pq에 넣음
			pq.push(make_pair(edges[edge][i].first, edges[edge][i].second));
		}
		if (edgeCost > maxCost) maxCost = edgeCost;
		cnt++;
		ans += edgeCost;
	}

	return ans - maxCost;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1647 도시 분할 계획
	// MST (프림 알고리즘)
	// 최소 스패닝 트리를 구한 다음 가장 비싼 비용을 가진 요소를 빼면 되지 않을까?

	int start, end, cost;
	cin >> n >> m;

	// 최소요소를 뽑아내서 거기서부터 시작
	int cheapestStart = -1;
	int cheapestCost = 1001;
	for (int i = 0; i < m; ++i) {
		cin >> start >> end >> cost;
		edges[start].push_back(make_pair(cost, end));
		edges[end].push_back(make_pair(cost, start));
		if (cost < cheapestCost) {
			cheapestCost = cost;
			cheapestStart = start;
		}
	}

	cout << solve(start);

	return 0;
}

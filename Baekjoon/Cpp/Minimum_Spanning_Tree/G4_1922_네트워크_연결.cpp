#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;

int v, e;
vector<tuple<int, int, int>> edges;
int parent[1001];

int getParent(int a) {
	// 자기 자신이 부모면 그대로 리턴
	if (a == parent[a]) return a;
	// 아니면 부모 찾을 때까지 재귀
	return parent[a] = getParent(parent[a]);
}

// 더 작은 쪽으로 부모를 통일
void makeUnion(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if (a > b) parent[a] = b;
	else parent[b] = a;
}


// 부모가 같은지 확인
bool find(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if (a == b) return true;
	else return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1922 네트워크 연결 - 1197 최소 스패닝 트리와 사실상 같은 문제
	// 그래프, 크루스칼 알고리즘 (MST) - Union Find
	int start, end, cost;
	int answer = 0; // 
	cin >> v >> e;
	for (int i = 0; i < e; ++i) {
		cin >> start >> end >> cost;
		edges.push_back(make_tuple(cost, start, end));
	}
	sort(edges.begin(), edges.end());

	// 자기자신의 부모는 자기 자신
	for (int i = 1; i <= v; ++i) {
		parent[i] = i;
	}

	int cnt = 0; // 연결된 간선 개수
	for (int i = 0; i < e; ++i) {
		int cost = get<0>(edges[i]);
		int from = get<1>(edges[i]);
		int to = get<2>(edges[i]);
		if (!find(from, to)) {
			makeUnion(from, to);
			answer += cost;
		}
	}

	cout << answer;

	return 0;
}

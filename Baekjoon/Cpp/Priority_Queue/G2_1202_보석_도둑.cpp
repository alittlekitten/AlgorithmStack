#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1202 보석 도둑
	// 우선순위 큐

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 무게 오름차순 (전체 보석 우선순위큐)
	priority_queue<pair<int, int>> pq2; // 가치 내림차순 (가방에 들어갈 수 있는 보석들의 우선순위큐)
	vector<int> v;
	int n, k, input1, input2;
	long long answer = 0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> input1 >> input2;
		pq.push(make_pair(input1, input2)); // 앞은 무게, 뒤는 가치
	}
	for (int i = 0; i < k; ++i) {
		cin >> input1;
		v.push_back(input1);
	}
	// 가방 크기 오름차순으로 정리
	sort(v.begin(), v.end());

	// 각 가방의 한계 무게까지의 보석들을 모두 pq에 삽입
	for (int i = 0; i < k; ++i) {
		while (!pq.empty()) {
			int weight = pq.top().first;
			int value = pq.top().second;
			if (v[i] >= weight) {
				pq2.push(make_pair(value, weight));
				pq.pop();
			}
			else break;
		}
		// 한계 무게까지의 보석들 중 가장 가치가 높은 친구를 answer에 추가
		if (!pq2.empty()) {
			answer += pq2.top().first;
			pq2.pop();
		}
	}

	cout << answer;

	return 0;
}

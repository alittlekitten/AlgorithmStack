#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2161 카드1
	// 큐
	int n;
	queue<int> q;
	cin >> n;

	// 1이 맨 위, n이 제일 아래
	for (int i = 1; i <= n; ++i) q.push(i);

	// 버리고 맨 뒤로 보내고 반복
	while (q.size() != 1) {
		cout << q.front() << " ";
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();

	return 0;
}

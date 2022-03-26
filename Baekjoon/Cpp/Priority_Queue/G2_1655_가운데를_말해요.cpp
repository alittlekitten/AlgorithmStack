#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1655 가운데를 말해요
	// 우선순위 큐

	priority_queue<int, vector<int>, greater<int>> pqBig; // 큰 값들중 최솟값
	priority_queue<int> pqSmall; // 작은 값들중 최댓값
	int n, input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		// min heap에 더 많은 양이 들어가면 안된다
		// 우리가 출력할 부분은 max heap의 top! (만약 가운데가 2개면 더 작은 값을 출력해야 하기 때문에!!
		// 반드시 pqAsc가 pqDesc보다 크기가 커야한다
		if (pqSmall.size() == pqBig.size()) pqSmall.push(input);
		else pqBig.push(input);

		while (pqBig.size() && pqBig.top() < pqSmall.top()) {
			int tmp = pqBig.top();
			pqBig.pop();
			pqBig.push(pqSmall.top());
			pqSmall.pop();
			pqSmall.push(tmp);
		}
		cout << pqSmall.top() << '\n';
	}

	return 0;
}

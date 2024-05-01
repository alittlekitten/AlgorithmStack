#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 11871 님 게임 홀짝
	// 수학, 게임이론
	int n, input;
	int ans = 0;
	cin >> n;

	// 마지막 돌을 꺼낸 사람이 이김
	// 그런디 수(다음 상태가 될 수 있는 것들을 제외한 수들 중 가장 작은 정수)를 세보면 아래와 같다 (0과 2의 그런디 수는 문제에서 0으로 처리)
	// G0 = 0 / G1 {0} = 1 / G2 = 0 / G3 {0, 1} = 2 / G4 {2} = 1 / G5 {0, 1, 3} = 3 / G6 {2, 4} = 2 / G7 {0, 1, 3, 5} = 4 /...
	// G4가 1인 이유는, G2가 0으로 치환될 수 있기 때문에 0이 아닌 음이 아닌 정수들 중 가장 작은 정수는 1이기 때문
	// G5의 다음 상태는 돌이 3개, 돌이 1개, 돌이 0개 -> {G3, G1, G0} -> {2, 1, 0} -> G5 = 3
	// G6의 다음 상태는 돌이 4개, 돌이 2개 -> {G4, G2} -> {1, 0} -> G6 = 2
	// G7의 다음 상태는 돌이 5개, 돌이 3개, 돌이 1개, 돌이 0개 -> {G5, G3, G1, G0} -> {3, 2, 1, 0} -> G7 = 4

	// 그런디 수를 구했으니, 각각의 돌더미의 xor값이 0이 아니면 koosaga의 승, 0이면 cubelover의 승
	// (돌을 뺌으로써 xor값을 0으로 만들 수 있을 때 필승인 normal case이기 때문)
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input % 2) ans ^= (input + 1) / 2;
		else ans ^= (input - 1) / 2;
	}

	if (ans) cout << "koosaga";
	else cout << "cubelover";

	return 0;
}

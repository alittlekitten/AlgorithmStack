#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32025 체육은 수학과목 입니다
	// 수학, 기하학
	int h, w;
	cin >> h >> w;
	cout << min(h, w) * 50;
	
	return 0;
}

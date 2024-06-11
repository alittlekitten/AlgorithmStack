#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30455 이제는 더 이상 물러날 곳이 없다
	// 애드혹, 게임이론
	int n;
	cin >> n;
	if (n % 2) cout << "Goose";
	else cout << "Duck";

	return 0;
}

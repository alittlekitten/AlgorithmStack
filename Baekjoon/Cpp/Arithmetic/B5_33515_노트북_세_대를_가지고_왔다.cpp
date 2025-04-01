#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33515 노트북 세 대를 가지고 왔다
	// 수학
	int t1, t2;
	cin >> t1 >> t2;
	cout << min(t1, t2);
	
	return 0;
}

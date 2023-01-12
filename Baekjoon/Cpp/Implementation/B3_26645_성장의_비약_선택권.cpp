#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26645 성장의 비약 선택권
	// 구현
	int n;
	cin >> n;
	if (n < 206) cout << 1;
	else if (n < 218) cout << 2;
	else if (n < 229) cout << 3;
	else cout << 4;

	return 0;
}    

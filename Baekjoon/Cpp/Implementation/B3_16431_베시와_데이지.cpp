#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16431 베시와 데이지
	// 구현
	int br, bc, dr, dc, jr, jc;
	cin >> br >> bc >> dr >> dc >> jr >> jc;

	int b = max(abs(jr - br), abs(jc - bc));
	int d = abs(jr - dr) + abs(jc - dc);

	if (b < d) cout << "bessie";
	else if (b > d) cout << "daisy";
	else cout << "tie";

	return 0;
}

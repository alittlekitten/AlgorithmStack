#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30642 아이그루스와 화장실
	// 수학
	string s;
	int n, k;
	cin >> n >> s >> k;
	if (s == "annyong") {
		if (!(k % 2)) ++k;
	}
	else {
		if (k % 2) ++k;
	}
	if (k > n) k -= 2;

	cout << k;

	return 0;
}

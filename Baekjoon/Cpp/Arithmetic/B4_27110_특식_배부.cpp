#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27110 특식 배부
	// 수학
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	cout << min(n, a) + min(n, b) + min(n, c);
	
	return 0;
}    

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 16673 고려대학교에는 공식 와인이 있다
    // 수학
    int c, k, p;
    cin >> c >> k >> p;
    int sum = 0;
    for (int i = 1; i <= c; ++i) {
        sum += i * k + i * i * p;
    }

    cout << sum;

	return 0;
} 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(long long a, int b) {
	return a * b / gcd(a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1037 약수
    // 수학
	
	int n, input, result;
	cin >> n >> result;
	if (n == 1) cout << result * result;
	else {
		int max = result;
		int min = result;
		for (int i = 0; i < n - 1; ++i) {
			cin >> input;
			if (max < input) max = input;
			if (min > input) min = input;
			result = lcm(result, input);
		}
		if (result == max) result = min * max;
		cout << result;
	}
	
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int a, b, c;

	cin >> a >> b >> c;

	int product = a * b * c; // 1000^3 해도 int범위 안에서 처리 가능
	string p_s = to_string(product);
	int num_a[10] = {};
	
	for (int i = 0; i < p_s.size(); ++i) {
		int tmp = p_s[i] - '0'; // char을 int로 변환
		num_a[tmp]++;
	}

	for (int i = 0; i < 10; ++i)
		cout << num_a[i] << endl;

	return 0;
}

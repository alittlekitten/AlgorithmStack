#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25814 Heavy Numbers
	// 수학
	string s1, s2; 
	cin >> s1 >> s2;

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < s1.size(); ++i) sum1 += s1[i] - '0';
	for (int i = 0; i < s2.size(); ++i) sum2 += s2[i] - '0';

	if (s1.size() * sum1 > s2.size() * sum2) cout << 1;
	else if (s1.size() * sum1 < s2.size() * sum2) cout << 2;
	else cout << 0;

	return 0;
}

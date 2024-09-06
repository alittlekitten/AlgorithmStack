#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13711 LCS 4
	// DP, 가장 긴 증가하는 부분 수열
	int n, input;
	int a[100001] = { 0 };
	int b[100001] = { 0 };
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		a[input] = i;
	}
	for (int i = 0; i < n; ++i) {
		cin >> input;
		b[i] = a[input];
	}

	// 첫 번째 원소를 벡터에 넣고 두 번째 원소부터 가장 뒤의 값과 비교한다
	v.push_back(b[0]);
	for (int i = 1; i < n; ++i) {
		if (v.back() < b[i]) v.push_back(b[i]);
		else {
			// i번째 원소가 v.back()보다 작으면 이 값보다 크거나 같은 수를 찾아서 그 위치에 값 넣기
			int idx = lower_bound(v.begin(), v.end(), b[i]) - v.begin();
			v[idx] = b[i];
		}
	}
	cout << v.size();

	return 0;
}

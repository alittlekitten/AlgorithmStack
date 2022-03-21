#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2473 세 용액
	// 투 포인터
	int n;
	long long input;
	vector<long long> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	// 정렬
	sort(v.begin(), v.end());

	// 하나 고정시키고 투포인터~
	// 세 용액 저장용
	int one = 0;
	int two = 0;
	int three = 0;
	long long sum = 3000000001;

	// 인덱스
	int f = -1;
	int b = -1;

	bool chk = false;
	for (int i = 0; i < n - 2; ++i) {
		if (chk) break;
		f = i + 1;
		b = n - 1;
		while (b > f) {
			long long tmp = v[i] + v[f] + v[b];
			if (abs(tmp) < sum) {
				sum = abs(tmp);
				one = v[i];
				two = v[f];
				three = v[b];
			}
			if (tmp < 0) f++;
			else if (tmp > 0) b--;
			else {
				cout << v[i] << " " << v[f] << " " << v[b];
				chk = true;
				break;
			}
		}
	}

	if (!chk) cout << one << " " << two << " " << three;

	return 0;
}

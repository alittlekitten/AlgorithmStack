#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// Brute Force
	// 0. 버튼 입력만으로 접근하는 경우
	// 1. +- 버튼만으로 접근하는 경우
	// 2. 버튼입력 + +-버튼으로 접근하는 경우
	// 3. target이 100인 경우

	int n, m, num;
	int case0, case1, case2, case3;
	bool broken[10] = { false };

	cin >> n >> m;

	string string_n = to_string(n); // n의 string형태

	for (int i = 0; i < m; ++i) {
		cin >> num;
		broken[num] = true;
	}
	
	// 0. 버튼 입력만으로 접근하는 경우
	bool chk = true;
	for (int i = 0; i < string_n.size(); ++i) {
		if (broken[string_n[i]-'0'] == true) chk = false;
	}

	if (chk == true) case0 = string_n.size();
	else case0 = 10000000;
	
	// 1. +- 버튼만으로 접근하는 경우
	case1 = abs(n - 100);

	// 2. 버튼 입력 후 +- 버튼으로 접근하는 경우
	case2 = 10000000;
	for (int i = 0; i < 1000001; ++i) {
		bool chk2 = true;
		int tmp;
		string tmp2 = to_string(i);
		
		for (int j = 0; j < tmp2.size(); ++j) {
			if (broken[tmp2[j] - '0']) {
				chk2 = false;
				break;
			}
		}
		if (chk2 == true) {
			tmp = abs(i - n) + to_string(i).size();
			if (tmp < case2) case2 = tmp;
		}
	}

	
	// 결산
	vector<int> v2;
	v2.push_back(case0);
	v2.push_back(case1);
	v2.push_back(case2);
	sort(v2.begin(), v2.end());

	cout << v2[0];

	return 0;
}

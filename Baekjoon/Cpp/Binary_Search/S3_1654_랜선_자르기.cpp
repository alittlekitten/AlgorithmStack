#include <iostream>
#include <vector>
using namespace std;

int main() {
	// 이분탐색
	// 어떤 값으로 실패했다면, 당연히 그것보다 긴 길이로는 커팅할 수 없다
	// 반대로 어떤 값으로 성공했다면 당연히 그것보다 짧은 길이로도 커팅할 수 있다
	long long k, n, line, cuttedNum;
	long long min = 0;
	long long max = 4294967295; // 2^32-1
	long long mid;
	vector<int> lines;
	
	cin >> k >> n;
	for (int i = 0; i < k; ++i) {
		cin >> line;
		lines.push_back(line);
	}

	while (1) {
		cuttedNum = 0; // 같은 길이로 자른 랜선의 수
		mid = (min + max) / 2; // 임시로 설정한 랜선의 길이
		for (int i = 0; i < k; ++i) {
			cuttedNum += lines[i] / mid;
		}
		if (cuttedNum < n) max = mid-1;
		else min = mid+1;

		if (min > max) break;
	}
	cout << max; // 마지막은 결국 else문(min = mid+1)로 끝날 것이기 때문에!!

	return 0;
}

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 19644 좀비 떼가 기관총 진지에도 오다니
	// 누적합
	int l, ml, mk, c; // 길, 기관총 사거리, 기관총 데미지, 지뢰개수
	int arr[3000001] = { 0 };
	int bombArr[3000001] = { 0 }; // 폭탄 터뜨렸는지
	cin >> l >> ml >> mk >> c;

	// 10 2 1 1
	// {0,100,1,1,1,1,0,0,0,0,0}
	// {0,1,1,0
	for (int i = 1; i <= l; ++i) cin >> arr[i];
	for (int i = 1; i <= l; ++i) {
		// i - ml <= 0이라면 i번만큼만 기관총 발사 가능
		if (i - ml <= 0) {
			bombArr[i] = bombArr[i - 1];
			if ((i - bombArr[i]) * mk >= arr[i]) continue;
			else {
				// 폭탄 있으면 폭탄 사용
				if (c) {
					--c;
					++bombArr[i];
				}
				// gg
				else {
					cout << "NO";
					return 0;
				}
			}
		}
		else {
			if (ml == 1) bombArr[i] = 0;
			else {
				bombArr[i] = bombArr[i - 1];
				if (bombArr[i - ml - 1] == bombArr[i - ml] - 1) --bombArr[i];
			}
			if ((ml - bombArr[i]) * mk >= arr[i]) continue;
			else {
				// 폭탄 있으면 폭탄 사용
				if (c) {
					--c;
					++bombArr[i];
				}
				// gg
				else {
					cout << "NO";
					return 0;
				}
			}
		}
	}
	cout << "YES";

	return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

string origin;
string arr;
string target;

// 좌표 넣으면 그 위치의 char이 O면 #, #이면 O로 바꿈
void flip(int idx) {
	if (arr[idx] == '0') arr[idx] = '1';
	else arr[idx] = '0';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14927 전구 끄기
	// 그리디

	int n;
	
	cin >> n;

	cin >> arr;
	origin = arr;

	cin >> target;

	int cnt1 = 1;
	bool chk1 = true;
	int cnt2 = 0;
	bool chk2 = true;

	// 두 가지 케이스 - 첫 번째 전구를 누르는 경우
	flip(0);
	flip(1);

	for (int i = 1; i < n; ++i) {
		if (arr[i - 1] != target[i - 1]) {
			flip(i - 1);
			flip(i);
			flip(i + 1);
			cnt1++;
		}
	}

	if (arr[n - 1] != target[n - 1]) chk1 = false;

	// 첫 번째 전구를 누르지 않는 경우
	// 초기화
	for (int i = 0; i < n; ++i) {
		arr[i] = origin[i];
	}

	for (int i = 1; i < n; ++i) {
		if (arr[i - 1] != target[i - 1]) {
			flip(i - 1);
			flip(i);
			flip(i + 1);
			cnt2++;
		}
	}

	if (arr[n - 1] != target[n - 1]) chk2 = false;

	// 결과 정리
	if (!chk1 && !chk2) cout << -1;
	else if (chk1 && !chk2) cout << cnt1;
	else if (!chk1 && chk2) cout << cnt2;
	else cout << min(cnt1, cnt2);

    return 0;
}

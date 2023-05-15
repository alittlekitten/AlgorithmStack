#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8723 Patyki
	// 구현
	int arr[3];
	bool chk1 = false;
	bool chk2 = false;
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	if (arr[0] == arr[1] && arr[1] == arr[2]) chk1 = true;
	if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) chk2 = true;
	if (!chk1 && !chk2) cout << 0;
	else if (!chk1 && chk2) cout << 1;
	else cout << 2;
		
	return 0;
}

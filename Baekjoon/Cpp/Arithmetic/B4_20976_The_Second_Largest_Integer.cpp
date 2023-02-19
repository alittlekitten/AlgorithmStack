#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20976 The Second Largest Integer
	// 수학
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	cout << arr[1];
	
	return 0;
}

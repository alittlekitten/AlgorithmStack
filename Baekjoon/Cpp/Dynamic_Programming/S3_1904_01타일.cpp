#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1904 01타일
	// DP
	int n;
  int arr[10000001] = { 0 };
  cin >> n;
  
  arr[1] = 1;
  arr[2] = 2;
  for (int i = 3; i <= n; ++i) arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
  cout << arr[n];
    
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(NULL);

  // 5622 다이얼
  // 구현
  int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
  int sum = 0;
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); ++i) {
    int index = s[i] - 65;
    sum += arr[index];
  }
 
	cout << sum;
 
	return 0;
}

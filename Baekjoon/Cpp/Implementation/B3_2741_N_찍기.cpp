#include <iostream>
#include <string>

using namespace std;

int main(void) {
  // endl쓰니까 시간초과... \n을 사용하면 시간을 단축할 수 있다!
  // 만약 그래도 안되면 ios_base::sync_with_stdio(false);를 이용해서 C 표준 스트림과의 동기화를 끊어주면 C 표준 스트림 부분이 생략되어 더 빨라진다!
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cout << i << '\n';
	}

	return 0;
}

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 2991 사나운 개
	// 수학
    int a, b, c, d;
    int arr[3] = { 0 };
    int ans[3] = { 0 };
    cin >> a >> b >> c >> d;
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        int dog1 = arr[i] % (a + b);
        int dog2 = arr[i] % (c + d);
        if (dog1 <= a && dog1 != 0) ans[i]++;
        if (dog2 <= c && dog2 != 0) ans[i]++;
    }
    for (int i = 0; i < 3; i++) cout << ans[i] << '\n';

	return 0;
}

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13456 Richard Hamming
	// 구현
	int t, n;
    cin >> t;

    while (t--) {
        int arr1[50] = { 0 };
        int arr2[50] = { 0 };
        
        cin >> n;
        
        for (int i = 0; i < n; ++i) cin >> arr1[i];
        for (int i = 0; i < n; ++i) cin >> arr2[i];

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (arr1[i] != arr2[i]) ++ans;
        }

        cout << ans << '\n';
    }

	return 0;
}

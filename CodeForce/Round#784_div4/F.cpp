#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int arr[200001];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
 
    int tc, n;
    string input;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        int ans = 0;
        cin >> n;
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        if (n <= 1) {
            cout << 0 << '\n';
            continue;
        }
        int s = 0;
        int e = n - 1;
        int sSum = arr[0];
        int eSum = arr[n-1];
        int cnt = 2;
        while (s < e) {
            if (sSum == eSum) {
                ans = cnt;
                ++s;
                --e;
                cnt += 2;
                sSum += arr[s];
                eSum += arr[e];
            }
            else if (sSum > eSum) {
                --e;
                ++cnt;
                eSum += arr[e];
            }
            else {
                ++s;
                ++cnt;
                sSum += arr[s];
            }
        }
 
        cout << ans << '\n';
 
    }
 
    return 0;
}

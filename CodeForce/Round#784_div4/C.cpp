#include <iostream>
using namespace std;
 
int arr[51];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
 
    int tc, n, t1, t2, input;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        bool tmp = true;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
 
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0 && arr[i] % 2 != arr[0] % 2) tmp = false;
            if (i % 2 == 1 && arr[i] % 2 != arr[1] % 2) tmp = false;
        }
        if (tmp) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
 
    return 0;
}

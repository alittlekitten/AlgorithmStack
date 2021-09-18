#include <iostream>
#include <string>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tcs, k, n;
    cin >> tcs;

    // 1 2 3 4 5 6     1 3 6 10 15 21      1 4 10 20 35 56
    for (int i = 0; i < tcs; ++i) {
        int a[14] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
        cin >> k >> n;
        for (int j = 0; j < k; ++j) {
            for (int l = 0; l < n; ++l) {
                if (l == 0) a[l] = 1;
                else a[l] += a[l - 1];
            }
        }
        if (n > 0) cout << a[n - 1] << '\n';
    }
    
    return 0;
}

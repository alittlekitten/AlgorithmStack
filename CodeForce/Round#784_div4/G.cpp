#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
char arr[50][50];
char ans[50][50];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
 
    int tc, n, m;
    string input;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        int ans = 0;
        cin >> n >> m;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
            }
        }
        
        for (int i = 0; i < m; ++i) {
            int tmp = n - 1;
            for (int j = n - 1; j >= 0; --j) {
                if (arr[j][i] == '.') continue;
                else if (arr[j][i] == 'o') tmp = j - 1;
                else {
                    char tmp2 = arr[tmp][i];
                    arr[tmp][i] = arr[j][i];
                    arr[j][i] = tmp2;
                    while (tmp > 0) {
                        if (arr[tmp][i] != 'o') break;
                        else --tmp;
                    }
                    --tmp;
                    while (tmp > 0 && arr[tmp][i] == 'o') --tmp;
                    j = tmp;
                }
            }
        }
 
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << arr[i][j];
            }
            cout << '\n';
        }
    }
 
    return 0;
}

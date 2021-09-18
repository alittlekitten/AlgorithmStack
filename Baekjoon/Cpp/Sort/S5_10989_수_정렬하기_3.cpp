#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, input;
    int a[10001] = { 0 };
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        a[input]++;
    }

    for (int i = 1; i < 10001; ++i) {
        if (a[i] != 0) {
            for (int j = 0; j < a[i]; ++j) {
                cout << i << '\n';
            }
        }
    }

    return 0;
}

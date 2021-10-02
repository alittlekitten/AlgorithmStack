#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // DP (기억)
    int a[1000001];
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    
    int input;

    cin >> input;

    for (int i = 4; i <= input; ++i) {
        a[i] = a[i - 1] + 1;
        if (i % 3 == 0) a[i] = min(a[i], a[i / 3] + 1);
        if (i % 2 == 0) a[i] = min(a[i], a[i / 2] + 1);
    }

    cout << a[input];

    return 0;
}

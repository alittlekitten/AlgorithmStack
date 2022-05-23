#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 19944 뉴비의 기준은 뭘까?
    // 구현
    int n, m;
    cin >> n >> m;
    if (m == 1 || m == 2) cout << "NEWBIE!\n";
    else if (2 < m && m <= n) cout << "OLDBIE!\n";
    else cout << "TLE!\n";

    return 0;
}

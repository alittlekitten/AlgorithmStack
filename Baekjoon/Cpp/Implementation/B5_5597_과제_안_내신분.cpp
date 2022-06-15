#include <iostream>
#include <string>
using namespace std;

bool chk[31];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5597 과제 안 내신분..?
    // 구현
    int input;
    for (int i = 0; i < 28; ++i) {
        cin >> input;
        chk[input] = true;
    }

    for (int i = 1; i <= 30; ++i) {
        if (!chk[i]) cout << i << '\n';
    }

    return 0;
}

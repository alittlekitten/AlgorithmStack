#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    int answer = 0;
    for (int i = 0; i < 5; ++i){
        cin >> input;
        if (input < 40) answer += 40;
        else answer += input;
    }
    cout << answer / 5;

    return 0;
}

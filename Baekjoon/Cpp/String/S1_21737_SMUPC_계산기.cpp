#include <iostream>
#include <string>

using namespace std;

int cal(int a, int b, char oper) {
    if (oper == 'S') return a - b;
    else if (oper == 'M') return a * b;
    else if (oper == 'U') return a / b;
    else if (oper == 'P') return a + b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 21737 SMUPC 계산기
    // 문자열

    string s;
    int n;
    int startIdx = 0;
    int cnt = 0;
    string first = "";
    string second = "";
    int cCnt = 0;
    int operCnt = 0;
    char oper = 'X'; // 임의의 초기값
    cin >> n >> s;
    for (int i = 0; i < s.size(); ++i) {
        // SMUP가 들어오는 경우
        if (s[i] == 'S' || s[i] == 'M' || s[i] == 'U' || s[i] == 'P') {
            // 계산할 게 있다면 계산
            if (oper != 'X' && oper != 'C') {
                first = to_string(cal(stoi(first), stoi(second), oper));
                second = "";
            }
            oper = s[i];
        }
        // C가 들어오는 경우
        else if (s[i] == 'C') {
            // 출력 전에 계산할 게 있다면 계산
            if (oper != 'X' && oper != 'C') {
                first = to_string(cal(stoi(first), stoi(second), oper));
                second = "";
            }
            cout << stoi(first) << " ";
            cCnt++;
            oper = s[i];
        }
        // 숫자가 들어오는 경우
        else {
            // 맨 처음에는 first에 바로 넣기
            if (oper == 'X') first += s[i];
            // 기호 등장 이후에는 second에 넣기
            else second += s[i];
        }
    }

    if (cCnt == 0) cout << "NO OUTPUT";

    return 0;
}

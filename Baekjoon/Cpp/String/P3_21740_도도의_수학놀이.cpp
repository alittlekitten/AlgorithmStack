#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 숫자들을 이어붙였을 때 더 큰 수
bool cmp(string a, string b) {
    return a + b > b + a;
}

// 거꾸로 뒤집었을 때 길이가 긴 요소, 길이가 같으면 int가 큰 요소 반환 (string) - 원래 수를 보존해야한다
string cmp2(string a, string b) {
    string tmp = "";
    if (a.size() == b.size()) {
        if (stoi(a) > stoi(b)) return a;
        else return b;
    }
    else if (a.size() > b.size()) return a;
    else return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 21740 도도의 수학놀이
    // 문자열, 그리디, 정렬

    int n, input;
    vector<string> v;
    string maxValue = "";
    cin >> n;

    // 입력받기
    for (int i = 0; i < n; ++i) {
        cin >> input;
        string tmp = to_string(input);
        reverse(tmp.begin(), tmp.end());
        for (int j = 0; j < tmp.size(); ++j) {
            if (tmp[j] == '6') tmp[j] = '9';
            else if (tmp[j] == '9') tmp[j] = '6';
        }
        
        // 뒤집었을 때 가장 긴 수이면서 큰 수를 찾아야함
        maxValue = cmp2(tmp, maxValue);
        v.push_back(tmp);
    }
    
    // 뒤집었을 때 가장 큰 수 한번 더 추가
    v.push_back(maxValue);

    // 뒤집었을 때 큰 수부터 정렬
    sort(v.begin(), v.end(), cmp);

    // 순서대로 reverseAnswer 배열에 넣기
    string reverseAnswer = "";
    for (int i = 0; i < v.size(); ++i) {
        reverseAnswer += v[i];
    }

    // 다시 뒤집기
    string answer = "";
    for (int i = reverseAnswer.size() - 1; i >= 0; --i) {
        // 뒤집었던 6과 9르 다시 원상복귀
        if (reverseAnswer[i] == '6') answer += '9';
        else if (reverseAnswer[i] == '9') answer += '6';
        else answer += reverseAnswer[i];
    }

    cout << answer;

    return 0;
}

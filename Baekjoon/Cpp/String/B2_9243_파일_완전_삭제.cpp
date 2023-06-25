#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9243 파일 완전 삭제
    // 문자열
    string s1, s2;
    int n;
    cin >> n >> s1 >> s2;
    if (!(n % 2)) {
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] != s2[i]) {
                cout << "Deletion failed";
                return 0;
            }
        }
        cout << "Deletion succeeded";
    }
    else {
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] == s2[i]) {
                cout << "Deletion failed";
                return 0;
            }
        }
        cout << "Deletion succeeded";
    }
   
	return 0;
}

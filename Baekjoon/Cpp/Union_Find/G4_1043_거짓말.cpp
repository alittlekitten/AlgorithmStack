#include <iostream>
#include <vector>
using namespace std;

int parents[51]; // union-find를 위한 parents배열
vector<int> know; // 이미 진실을 아는 사람들의 모임
vector<vector<int>> v(50); // 각 파티마다 어떤 사람이 오는지 넣어두는 곳, 미리 50개 공간 초기화시켜놓기

int Find(int x) {
    if (parents[x] == x) return x;
    return Find(parents[x]);
}

void Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    parents[x] = y;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1043 거짓말
    // union-find

    int n, m, k, input;
    cin >> n >> m >> k;

    // 이미 정답 아는 사람 넣어두기
    for (int i = 0; i < k; ++i) {
        cin >> input;
        know.push_back(input);
    }

    // 자기 자신으로 초기화
    for (int i = 1; i <= n; i++) {
        parents[i] = i;
    }

    for (int i = 0; i < m; i++) {
        cin >> input;
        int num = 0; // 현재 num
        int prev = 0; // 이전 num
        // Union 과정
        for (int j = 0; j < input; j++) {
            if (j >= 1) {
                prev = num;
                cin >> num;
                Union(prev, num);
            }
            else {
                cin >> num;
            }
            v[i].push_back(num);
        }
    }

    // 전체 파티수에서 과장된 이야기를 할 수 있는 파티 개수를 구하기 위해서 ans 생성
    int ans = m; 

    // 정답 구하기
    for (auto& tmp : v) {
        bool chk = false;
        // 파티별로 체크하기
        for (auto& person : tmp) {
            if (chk) break; // 이미 진실을 아는 사람이 있었다면 더이상 체크할 필요 없음
            for (auto& tmp2 : know) {
                // 파티에 참가한 사람 중 이미 진실을 아는 사람이 있다면 chk를 true로 바꾸기
                if (Find(person) == Find(tmp2)) {
                    chk = true;
                    break;
                }
            }
        }
        // 만약 chk가 true면 전체 파티수에서 1 감소
        if (chk) ans--;
    }

    // 정답 출력
    cout << ans;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 14002 가장 긴 증가하는 부분 수열 4
    // 이분탐색(LIS)

    int LIS[1001] = { 0 };
    int idxLIS[1001] = { 0 };
    int arr[1001] = { 0 };
    int print[1001] = { 0 };
    int n, input;
    int len = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        // 원본 배열 등록
        arr[i] = input;
        // 이분탐색을 위한 lower_bound 사용 (lower_bound값이 가리키는 주소값 반환)
        // lower_bound는 정렬을 깨지 않고 배열에 input 요소가 들어갈 수 있는 위치를 이분탐색으로 찾아주는 함수, 매개변수는 (시작점, 끝점, 입력값)
        auto tmp = lower_bound(LIS, LIS + len, input);
        // 그 위치를 input값으로 갱신
        *tmp = input;
        // 새로 들어가는 위치값을 idxLIS에 삽입
        idxLIS[i] = distance(LIS, tmp);
        // 만약 맨 뒤에 들어가야 한다면 len을 +1 해줌
        if (tmp == LIS + len) len++;
    }
    cout << len << '\n';

    // print 배열 만들기
    int idx = len - 1;
    while (idx >= 0) {
        for (int i = n - 1; i >= 0; --i) {
            // 인덱스배열에서 같은게 나오면 출력
            if (idxLIS[i] == idx) {
                print[idx] = arr[i];
                idx--;
            }
        }
    }

    // print 배열 출력
    for (int i = 0; i < len; ++i) {
        cout << print[i] << " ";
    }

    return 0;
}

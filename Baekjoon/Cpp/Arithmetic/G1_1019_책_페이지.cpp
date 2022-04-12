#include <iostream>
using namespace std;

int number[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1019 책 페이지
    // 수학

    int n;
    cin >> n;

    int start = 1;
    int end = n;
    int digit = 1;
    
    while (start <= end) {
        // start의 끝자리를 0, end의 끝자리를 9로 맞춰주면서 number에 더해주는 단계
        while (start % 10 != 0 && start <= end) {
            for (int i = start; i > 0; i /= 10) {
                number[i % 10] += digit;
            }
            ++start;
        }
        if (start > end) break;
        while (end % 10 != 9 && start <= end) {
            for (int i = end; i > 0; i /= 10) {
                number[i % 10] += digit;
            }
            --end;
        }

        // 일괄 처리 단계
        start /= 10;
        end /= 10;

        for (int i = 0; i < 10; ++i) {
            number[i] += (end - start + 1) * digit;
        }
        digit *= 10;
    }

    for (int i = 0; i < 10; ++i) {
        cout << number[i] << " ";
    }

    return 0;
}

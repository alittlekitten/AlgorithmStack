#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // 최대 1000000만자의 글씨를 받아서, strtok으로 공백을 기준으로 자르고, 공백이 아닌 단어가 들어올 때 num을 1씩 증가시킴
    char b[1000000];
    int num = 0;
    cin.getline(b, sizeof(b), '\n');
    char* ptr;
    ptr = strtok(b, " ");
    while (ptr != NULL) {
        ptr = strtok(NULL, " ");
        num++;
    }

    cout << num;
    return 0;
}

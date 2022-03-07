#include <iostream>
using namespace std;

int inorder[100001];// left -> root -> right;
int postorder[100001]; // left -> right -> root;

void getPreorder(int in1, int in2, int po1, int po2) { // inorder 처음과 끝 좌표, postorder 처음과 끝 좌표

    // 종료조건 설정
    if (in1 > in2 || po1 > po2) return;

    // postorder의 마지막이 preorder의 맨 처음
    int root = postorder[po2];

    // inorder에서 root 찾기
    int inRoot = -1;
    for (int i = in1; i <= in2; ++i) {
        if (inorder[i] == root) {
            inRoot = i;
            break;
        }
    }
    // 개수 계산
    int leftcnt = inRoot - in1;
    int rightcnt = in2 - inRoot;

    // preorder의 순서는 root -> left -> right
    
    // root
    cout << root << " ";
    
    // left
    getPreorder(in1, inRoot - 1, po1, po1 + leftcnt - 1);

    // right
    getPreorder(inRoot + 1, in2, po1 + leftcnt, po2 - 1); // left로 둔 거 다음부터 마지막거 - 1
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2263 트리의 순회
    // 트리, 재귀

    int n, input;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        inorder[i] = input;
    }

    for (int i = 0; i < n; ++i) {
        cin >> input;
        postorder[i] = input;
    }

    getPreorder(0, n - 1, 0, n - 1);

    return 0;
}

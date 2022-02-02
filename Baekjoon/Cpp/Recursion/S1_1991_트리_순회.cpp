#include <iostream>
#include <vector>
using namespace std;

struct Node {
	char data;
    Node* left = NULL;
    Node* right = NULL;
};

void preorder(Node* node) {
    cout << node->data;

    if (node->left != NULL) {
        preorder(node->left);
    }

    if (node->right != NULL) {
        preorder(node->right);
    }
}

void inorder(Node* node) {
    if (node->left != NULL) {
        inorder(node->left);
    }

    cout << node->data;

    if (node->right != NULL) {
        inorder(node->right);
    }
}

void postorder(Node* node) {
    if (node->left != NULL) {
        postorder(node->left);
    }

    if (node->right != NULL) {
        postorder(node->right);
    }

    cout << node->data;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1991 트리 순회
	// ???? 트리문제

	int n;
	char ch1, ch2, ch3;
    vector<Node> v(26);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> ch1 >> ch2 >> ch3;
        v[ch1 - 'A'].data = ch1;
        if (ch2 != '.') v[ch1 - 'A'].left = &v[ch2 - 'A'];
        if (ch3 != '.') v[ch1 - 'A'].right = &v[ch3 - 'A'];
	}

    preorder(&v[0]);
    cout << '\n';
    inorder(&v[0]);
    cout << '\n';
    postorder(&v[0]);

	return 0;
}

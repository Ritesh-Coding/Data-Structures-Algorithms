#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* create_tree() {
    int data;
    cout << "Enter the Data:--> ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter the value to be placed in the left child " << root->data << ":--> ";
    root->left = create_tree();

    cout << "Enter the value to be placed in the right child " << root->data << ":--> ";
    root->right = create_tree();

    return root;
}

void left_view(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int level_size = q.size();
        bool is_first_node = true;

        for (int i = 0; i < level_size; i++) {
            Node* current = q.front();
            q.pop();

            if (is_first_node) {
                cout << current->data << " ";
                is_first_node = false;
            }

            if (current->left) {
                q.push(current->left);
            }

            if (current->right) {
                q.push(current->right);
            }
        }
    }
}

int main() {
    Node* root;
    root = create_tree();

    cout << "Left View: ";
    left_view(root);
    cout << endl;

    return 0;
}

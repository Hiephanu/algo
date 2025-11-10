#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void bfs(Node* root) {
    if (!root) return;
    queue <Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* current = q.front();
        q.pop();
        
        cout << current->data << " ";

        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
    
}

void dfs(Node* root) {
    if (!root) return;
    stack<Node*> s;
    s.push(root);

    while (!s.empty())
    {
        Node* current = s.top();
        s.pop();

        cout << current->data << " ";

        if (current->right) s.push(current->right);
        if (current->left) s.push(current->left);
    }
}

int main(int argc, char const *argv[])
{
    // Tạo cây ví dụ:
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // bfs(root);
    dfs(root);
    /* code */
    return 0;
}

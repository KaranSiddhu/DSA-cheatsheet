#include <bits/stdc++.h>
using namespace std;

/*Ques - Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

Input - 1 3 2 -1 -1 -1 -1

Output - 3 2 1
*/

class Node{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data){
    this->data = data;
    left = right = NULL;
  }

  ~Node(){
    delete left;
    delete right;
  }
};

Node *buildBinaryTree(){
  int rootData;
  cout << "Enter root data - ";
  cin >> rootData;

  Node *root = new Node(rootData);

  queue<Node *> pendingNodes;
  pendingNodes.push(root);

  while (!pendingNodes.empty()){
    Node *front = pendingNodes.front();
    pendingNodes.pop();

    int leftData;
    cout << "Enter Left Child of " << front->data << "\n";
    cin >> leftData;

    if (leftData != -1){
      Node *leftChild = new Node(leftData);
      front->left = leftChild;
      pendingNodes.push(leftChild);
    }

    int rightData;
    cout << "Enter Right Child of " << front->data << "\n";
    cin >> rightData;

    if (rightData != -1){
      Node *rightChild = new Node(rightData);
      front->right = rightChild;
      pendingNodes.push(rightChild);
    }
  }

  return root;
}

vector<int> reverseLevelOrder(Node *root){
  vector<int> ans;
  stack<Node *> s;
  queue<Node *> q;
  q.push(root);

  while (!q.empty()){
    Node *front = q.front();
    q.pop();
    s.push(front);

    if (front->right)
      q.push(front->right);

    if (front->left)
      q.push(front->left);
  }

  while (!s.empty()){
    Node *temp = s.top();
    ans.push_back(temp->data);
    s.pop();
  }

  return ans;
}

int main(){

  Node *root = buildBinaryTree();

  vector<int> ans = reverseLevelOrder(root);

  for(int e : ans)
    cout << e << " ";

  delete root;
  return 0;
}
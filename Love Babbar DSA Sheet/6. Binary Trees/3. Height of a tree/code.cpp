#include <bits/stdc++.h>
using namespace std;

/*Ques - Given a binary tree, find its height.

Input - 1 3 2 -1 -1 -1 -1

Output - 2
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

//Recursive solution
int heightOfBinaryTreeUsingRecursion(Node* root){
  if(root == NULL)
    return 0;

  int lHeight = heightOfBinaryTreeUsingRecursion(root -> left);
  int rHeight = heightOfBinaryTreeUsingRecursion(root -> right);
  
  return (max(lHeight, rHeight) + 1);
}

//Iterative solution
int heightOfBinaryTreeUsingQueue(Node* root){
  queue<Node*> q;
  q.push(root);

  int leftLevel = 0;
  int rightLevel = 0;

  while(!q.empty()){
    Node* front = q.front();
    q.pop();

    if(front -> left){
      leftLevel++;
      q.push(front -> left);
    }

    if(front -> right){
      rightLevel++;
      q.push(front -> right);
    }
  }
  return (max(leftLevel, rightLevel) + 1);
}

int main(){

  Node *root = buildBinaryTree();

  cout << "Height of given binary tree using recursion is - " << heightOfBinaryTreeUsingRecursion(root) << "\n";

  cout << "Height of given binary tree using queue is - " << heightOfBinaryTreeUsingQueue(root);

  delete root;
  return 0;
}
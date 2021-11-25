#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
class BinaryTreeNode{
public:
  T data;
  BinaryTreeNode* left;
  BinaryTreeNode* right;

  BinaryTreeNode(T data){
    this -> data = data;
    left = right = NULL;
  }

  ~BinaryTreeNode(){
    delete left;
    delete right;
  }
};

BinaryTreeNode<int>* takeInputLevelWise(){
  int rootData;
  cout << "Enter Root Data: ";
  cin >> rootData;

  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

  queue<BinaryTreeNode<int>*> pendingNodes;
  pendingNodes.push(root);

  while(!pendingNodes.empty()){
    BinaryTreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();

    int leftChildData;
    cout << "Enter Left Child of " << front -> data << "\n";
    cin >> leftChildData;

    if(leftChildData != -1){
      BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftChildData);
      front -> left = leftChild;
      pendingNodes.push(leftChild);
    }

    int righttChildData;
    cout << "Enter Right Child of " << front -> data << "\n";
    cin >> righttChildData;

    if(righttChildData != -1){
      BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(righttChildData);
      front -> right = rightChild;
      pendingNodes.push(rightChild);
    }
  }

  return root;
}

void printTreeLevelWise(BinaryTreeNode<int>* root){
  queue<BinaryTreeNode<int>*> pendingNodes;
  pendingNodes.push(root);

  while(!pendingNodes.empty()){
    BinaryTreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();

    cout << front -> data << ": ";

    if(front -> left){
      cout << "L:" << front -> left -> data << " "; 
      pendingNodes.push(front -> left);
    }
   
    if(front -> right){
      cout << "R:" << front -> right ->data;
      pendingNodes.push(front -> right);
    }
    cout << "\n";
  }
}

int countNodes(BinaryTreeNode<int>* root){
  if(root == NULL)
    return 0;

  return 1 + countNodes(root -> left) + countNodes(root -> right);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {

  if(root == NULL)
    return false;

  if(root -> data == x)
    return true;

  if(isNodePresent(root -> left, x))
    return true;

  if(isNodePresent(root -> right, x))
    return true;

  return false;
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){

  BinaryTreeNode<int>* root = takeInputLevelWise();
  
  printTreeLevelWise(root);

  int n;
  cout << "Enter the data to find - ";
  cin >> n;

  cout << (isNodePresent(root, n) ? "True" : "False");

  delete root;
  return 0;
}
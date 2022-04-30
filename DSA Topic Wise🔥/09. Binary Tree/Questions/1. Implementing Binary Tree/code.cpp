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

/*NOTE - Taking input child wise ( Not a preferred way )
BinaryTreeNode<int>* takeInput(){
  int rootData;
  cout << "Enter data: ";
  cin >> rootData;
  
  if(rootData == -1)
    return NULL;

  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
  BinaryTreeNode<int>* leftChild = takeInput();
  BinaryTreeNode<int>* rightChild = takeInput();

  root -> left = leftChild;
  root -> right = rightChild;

  return root;
}

void printTree(BinaryTreeNode<int>* root){
  if(root == NULL)
    return;
  
  cout << root -> data << ":";

  if(root -> left){
    (root -> right) ? 
      cout << "L" << root -> left -> data << ", " : 
      cout << "L" << root -> left -> data << " "; 
  }
  
  if(root -> right)
    cout << "R" << root -> right -> data;
  
  cout << "\n";
  printTree(root -> left);
  printTree(root -> right);
}
*/

//NOTE - Taking input Level wise ( preferred way )
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

//1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
int main(){

  BinaryTreeNode<int>* root = takeInputLevelWise();
  
  printTreeLevelWise(root);

  delete root;
  return 0;
}
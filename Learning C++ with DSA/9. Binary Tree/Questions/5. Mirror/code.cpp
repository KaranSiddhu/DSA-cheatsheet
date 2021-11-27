#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*Ques - Mirror the given binary tree.
INPUT -
1: L:2 R:3
2: L:4 R:5
3: L:6 R:7
4:
5:
6: L:8 R:9
7:
8:
9:

OUTPUT - 
1: L:3 R:2
3: L:7 R:6
2: L:5 R:4
7:
6: L:9 R:8
5:
4:
9:
8:
*/

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

/*NOTE - Recursive solution
Time complexity - O(n)
Space complexity - O(h), h is height of tree*/
void mirror(BinaryTreeNode<int>* root){
  if(root == NULL)
    return;

  mirror(root -> left);
  mirror(root -> right);

  BinaryTreeNode<int>* temp = NULL;  
  temp = root -> left;
  root -> left = root -> right;
  root -> right = temp;
}

/*NOTE Iterative solution using queue (Level Order Traversal)
Time complexity - O(n)
Space complexity - O(n)  
void mirror(BinaryTreeNode<int>* root){
 
  queue<BinaryTreeNode<int>*> pendingNodes;
  pendingNodes.push(root);

  while(!pendingNodes.empty()){
    BinaryTreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();

    swap(front -> left, front -> right);

    if(front -> left)
      pendingNodes.push(front -> left);
    
    if(front -> right)
      pendingNodes.push(front -> right);
  }
}
*/
 
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){

  BinaryTreeNode<int>* root = takeInputLevelWise();
  cout << "Before Mirror - \n";
  printTreeLevelWise(root);

  mirror(root);

  cout << "After Mirror - \n";
  printTreeLevelWise(root);
 
  delete root;
  return 0;
}
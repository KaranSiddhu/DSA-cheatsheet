#include <bits/stdc++.h>
using namespace std;

/*Ques - Given a binary tree, find its level order traversal.

Input - 1 3 2 -1 -1 -1 -1  

Output - 1 3 2
*/

template <typename T> class Node{
public:
  T data;
  Node* left;
  Node* right;

  Node(T data){
    this -> data = data;
    left = right = NULL;
  }

  ~Node(){
    delete left;
    delete right;
  }
};

Node<int>* buildBinaryTree(){
  int rootData;
  cout << "Enter root data - ";
  cin >> rootData;

  Node<int>* root = new Node<int>(rootData);

  queue<Node<int>*> pendingNodes;
  pendingNodes.push(root);

  while(!pendingNodes.empty()){
    Node<int>* front = pendingNodes.front();
    pendingNodes.pop();

    int leftData;
    cout << "Enter Left Child of " << front -> data << "\n";
    cin >> leftData;

    if(leftData != -1){
      Node<int>* leftChild = new Node<int>(leftData);
      front -> left = leftChild;
      pendingNodes.push(leftChild);
    }
   
    int rightData;
    cout << "Enter Right Child of " << front -> data << "\n";
    cin >> rightData;

    if(rightData != -1){
      Node<int>* rightChild = new Node<int>(rightData);
      front -> right = rightChild;
      pendingNodes.push(rightChild);
    }
  }

  return root;
}

void solution(Node<int>* root){
  queue<Node<int>*> pendingNodes;
  pendingNodes.push(root);
  
  cout << root -> data << " "; 
  
  while(!pendingNodes.empty()){
    Node<int>* front = pendingNodes.front();
    pendingNodes.pop();

    if(front -> left){
      cout << front -> left -> data << " ";
      pendingNodes.push(front -> left);
    }
    
    if(front -> right){
      cout << front -> right -> data << " ";
      pendingNodes.push(front -> right);
    }
  }
  cout << "\n";
}

int main(){

  Node<int>* root = buildBinaryTree();

  solution(root);

  delete root;
  return 0;
}
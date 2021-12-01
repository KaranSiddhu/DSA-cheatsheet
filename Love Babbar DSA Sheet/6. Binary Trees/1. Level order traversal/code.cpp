#include <bits/stdc++.h>
using namespace std;

/*Ques - Given a binary tree, find its level order traversal.

Input - 1 3 2 -1 -1 -1 -1  

Output - 1 3 2
*/

class Node{
public:
  int data;
  Node* left;
  Node* right;

  Node(int data){
    this -> data = data;
    left = right = NULL;
  }

  ~Node(){
    delete left;
    delete right;
  }
};

Node* buildBinaryTree(){
  int rootData;
  cout << "Enter root data - ";
  cin >> rootData;

  Node* root = new Node(rootData);

  queue<Node*> pendingNodes;
  pendingNodes.push(root);

  while(!pendingNodes.empty()){
    Node* front = pendingNodes.front();
    pendingNodes.pop();

    int leftData;
    cout << "Enter Left Child of " << front -> data << "\n";
    cin >> leftData;

    if(leftData != -1){
      Node* leftChild = new Node(leftData);
      front -> left = leftChild;
      pendingNodes.push(leftChild);
    }
   
    int rightData;
    cout << "Enter Right Child of " << front -> data << "\n";
    cin >> rightData;

    if(rightData != -1){
      Node* rightChild = new Node(rightData);
      front -> right = rightChild;
      pendingNodes.push(rightChild);
    }
  }

  return root;
}

vector<int> levelOrder(Node* root){

  vector<int> ans;
  ans.push_back(root -> data);
  
  queue<Node*> pendingNodes;
  pendingNodes.push(root);
      
  while(!pendingNodes.empty()){
    Node* front = pendingNodes.front();
    pendingNodes.pop();
          
    if(front -> left){
      ans.push_back(front -> left -> data);
      pendingNodes.push(front -> left);
    }
          
    if(front -> right){
      ans.push_back(front -> right -> data);
      pendingNodes.push(front -> right);
    }
  }
      
  return ans;
}

int main(){

  Node* root = buildBinaryTree();

  vector<int> ans = levelOrder(root);

  for(int e : ans)
    cout << e << " ";

  delete root;
  return 0;
}
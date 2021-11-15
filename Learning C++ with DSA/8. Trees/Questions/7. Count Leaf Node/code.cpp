#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Count total number of Leaf nodes.

template <typename T>
class TreeNode{
public:
  T data;
  vector<TreeNode<T> *> children;

  TreeNode(T data){
    this -> data = data;
  }

  ~TreeNode(){
    for(int i = 0; i < children.size(); i++)
      delete children[i];
  }
};

TreeNode<int>* takeInputLevelWise(){
  int rootData;
  cout << "Enter Root Data:\n";
  cin >> rootData;

  TreeNode<int>* root = new TreeNode<int>(rootData);

  queue<TreeNode<int>*> pendingNode;
  pendingNode.push(root);

  while(!pendingNode.empty()){
    TreeNode<int>* front = pendingNode.front();
    pendingNode.pop();

    int numChild;
    cout << "Enter the number of children of " << front -> data << "\n";
    cin >> numChild;

    for(int i = 0; i < numChild; i++){
      int childData;
      cout << "Enter " << i << "th child of " << front -> data << "\n";
      cin >> childData;

      TreeNode<int>* child = new TreeNode<int>(childData);
      front -> children.push_back(child);

      pendingNode.push(child);
    }
  }

  return root;
}

void printTreeLevelWise(TreeNode<int>* root){
  queue<TreeNode<int>*> pendingNode;
  pendingNode.push(root);

  while(!pendingNode.empty()){
    TreeNode<int>* front = pendingNode.front();
    pendingNode.pop();

    cout << front -> data << ":";

    for(int i = 0; i < front -> children.size(); i++){
      pendingNode.push(front -> children[i]);

      if(i == (front -> children.size() - 1 ))
        cout << front -> children[i] -> data;
      else
        cout << front -> children[i] -> data << ",";
    }
    cout << "\n";
  }
}

int countLeaf(TreeNode<int>* root){

  if(root == NULL);
    return -1;

  if(root -> children.size() == 0)
    return 1;
  
  int ans = 0;
  for(int i = 0; i < root -> children.size(); i++){
    ans += countLeaf(root -> children[i]);
  }

  return ans;
}

int main(){

  TreeNode<int>* root = takeInputLevelWise();

  printTreeLevelWise(root);

  cout << "Leaf node of tree is " << countLeaf(root);

  delete root;
  
  return 0;
}
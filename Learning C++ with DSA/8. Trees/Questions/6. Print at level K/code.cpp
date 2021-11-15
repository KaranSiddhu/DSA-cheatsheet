#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Print the level k or depth k

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
  cout << "Enter root data:\n";
  cin >> rootData;

  TreeNode<int>* root = new TreeNode<int>(rootData);

  queue<TreeNode<int>*> pendingNode;
  pendingNode.push(root);

  while(!pendingNode.empty()){
    TreeNode<int> * front = pendingNode.front();
    pendingNode.pop();

    int numChild;
    cout << "Enter total number of children of " << front -> data << "\n";
    cin >> numChild;

    for(int i = 0; i < numChild; i++){
      int childData;
      cout << "Enter the " << i << "th child of " << front -> data << "\n";
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
    TreeNode<int> * front = pendingNode.front();
    pendingNode.pop();

    cout << front -> data << ":";

    for(int i = 0; i < front -> children.size(); i++){
      pendingNode.push(front -> children[i]);

      if(i == (front -> children.size() - 1))
        cout << front -> children[i] -> data;
      else 
        cout << front -> children[i] -> data << ",";
    }
    cout << "\n";
  }

}

void printAtLevelK(TreeNode<int>* root, int k){

  if(root == NULL)
    return;

  if(k == 0){
    cout << root -> data << " \n"; 
    return;
  }

  for(int i = 0; i < root -> children.size(); i++){
    printAtLevelK(root -> children[i], k-1);
  }

}

int main(){
  TreeNode<int>* root = takeInputLevelWise();

  printTreeLevelWise(root);

  int k;
  cout << "Print the level that you want to print:\n";
  cin >> k;
  printAtLevelK(root, k);

  delete root;

  return 0;
}
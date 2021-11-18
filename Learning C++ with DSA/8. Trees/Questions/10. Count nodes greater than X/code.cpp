#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*Ques - Given a tree and a number x, find and return the number of nodes which are greater than x. 

I/p
1: 2, 3, 4
2: 
3: 
4:
2
O/P
2

*/
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
    cout << "Enter total number of children of " << front -> data << "\n";
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

      if(i == (front -> children.size() - 1))
        cout << front -> children[i] -> data;
      else
        cout << front -> children[i] -> data << ",";
    }
    cout << "\n";
  }
}

int getLargeNodeCount(TreeNode<int>* root, int x){
  if(root == NULL)
    return 0;
  
  int c = 0;
  if(root -> data > x)
    c++;

  for(int i = 0; i < root -> children.size(); i++){
    c += getLargeNodeCount(root -> children[i], x);
  }

  return c;
}

int main(){

  TreeNode<int>* root = takeInputLevelWise();

  printTreeLevelWise(root);

  int x;
  cout << "Enter the value of X:\n";
  cin >> x;

  cout << getLargeNodeCount(root, x);

  delete root;

  return 0;
}
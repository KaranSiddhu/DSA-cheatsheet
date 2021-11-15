#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Now we will learn how to print our tree in preorder and postorder

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

//NOTE Preorder Traversal
void preorder(TreeNode<int>* root){
  
  if(root == NULL)
    return;

  cout << root -> data << " ";

  for(int i = 0; i < root -> children.size(); i++){
    preorder(root -> children[i]);
  }
}

//NOTE Postorder Traversal
void postorder(TreeNode<int>* root){
  

  for(int i = 0; i < root -> children.size(); i++){
    preorder(root -> children[i]);
  }

  cout << root -> data << " ";
}

/*NOTE just copy paste below line, so that we wont have to fill value manually
1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0 

Tree is going to look like this 👇
1:2,3,4
2:5,6
3:7,8
4:
5:
6:
7:
8:9
9:
*/
int main(){

  TreeNode<int>* root = takeInputLevelWise();

  printTreeLevelWise(root);

  cout << "Preorder - "; 
  preorder(root); 

  cout << "\n";

  cout << "Postorder - "; 
  postorder(root); 

  delete root;
  return 0;
}
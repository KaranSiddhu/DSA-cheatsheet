#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*Ques - Given a tree and a number x, find and return the number of nodes which are greater than x. 

I/p
1: 2, 3, 4
2: 
3: 
4:
O/P
1

*/
template <typename T>
class TreeNode{
public:
  T data;
  vector<TreeNode<T> *> children;

  TreeNode(T data)  {
    this->data = data;
  }

  ~TreeNode()  {
    for (int i = 0; i < children.size(); i++)
      delete children[i];
  }
};

TreeNode<int> *takeInputLevelWise(){
  int rootData;
  cout << "Enter Root Data:\n";
  cin >> rootData;

  TreeNode<int> *root = new TreeNode<int>(rootData);

  queue<TreeNode<int> *> pendingNode;
  pendingNode.push(root);

  while (!pendingNode.empty()){
    TreeNode<int> *front = pendingNode.front();
    pendingNode.pop();

    int numChild;
    cout << "Enter total number of children of " << front->data << "\n";
    cin >> numChild;

    for (int i = 0; i < numChild; i++){
      int childData;
      cout << "Enter " << i << "th child of " << front->data << "\n";
      cin >> childData;

      TreeNode<int> *child = new TreeNode<int>(childData);
      front->children.push_back(child);

      pendingNode.push(child);
    }
  }
  return root;
}

void printTreeLevelWise(TreeNode<int> *root){
  queue<TreeNode<int> *> pendingNode;
  pendingNode.push(root);

  while (!pendingNode.empty())  {
    TreeNode<int> *front = pendingNode.front();
    pendingNode.pop();

    cout << front->data << ":";

    for (int i = 0; i < front->children.size(); i++){
      pendingNode.push(front->children[i]);

      if (i == (front->children.size() - 1))
        cout << front->children[i]->data;
      else
        cout << front->children[i]->data << ",";
    }
    cout << "\n";
  }
}

TreeNode<int> *nodeWithMaxChildSum(TreeNode<int> *root){
  TreeNode<int> *ans = root;
  int sum = root->data;
  for (int i = 0; i < root->children.size(); i++){
    sum += root->children[i]->data;
  }

  for (int i = 0; i < root->children.size(); i++){
    TreeNode<int> *childmax = nodeWithMaxChildSum(root->children[i]);

    int smallsum = childmax->data;

    for (int i = 0; i < childmax->children.size(); i++){
      smallsum += childmax->children[i]->data;
    }

    if (sum <= smallsum){
      ans = childmax;
      sum = smallsum;
    }
  }

  return ans;
}

int main(){

  TreeNode<int> *root = takeInputLevelWise();

  printTreeLevelWise(root);

  cout << "Node With Max Child Sum is " << nodeWithMaxChildSum(root)->data;

  delete root;

  return 0;
}
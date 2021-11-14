#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
class TreeNode{
public:
  T data;
  vector<TreeNode<T> *> children;
  
  TreeNode(T data){
    this -> data = data;
  }

  ~TreeNode()  {
    for (int i = 0; i < children.size(); i++)
      delete children[i];
  }
};

TreeNode<int>* takeInput(){
  int rootData;
  cout << "Enter Data:\n";
  cin >> rootData;
  TreeNode<int>* root = new TreeNode<int>(rootData);  

  int n;
  cout << "Enter number of children of " << rootData << "\n";
  cin >> n;

  for(int i = 0; i < n; i++){
    TreeNode<int>* child = takeInput();
    root -> children.push_back(child);
  }

  return root;
} 

TreeNode<int>* takeInputLevelWise(){

  //NOTE -> Taking input level wise
  int rootData;
  cout << "Enter Root Data:\n";
  cin >> rootData;
  TreeNode<int>* root = new TreeNode<int>(rootData);  
  
  queue<TreeNode<int> *> pendingNodes;

  pendingNodes.push(root);

  while(pendingNodes.size() != 0){
    TreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();
    cout << "Enter number of children of " << front -> data << "\n";
    int numChild;
    cin >> numChild;

    for(int i = 0; i < numChild; i++){
      int childData;
     
      cout << "Enter " << i << "th child of " << front -> data << "\n";
      cin >> childData;
     
      TreeNode<int>* child = new TreeNode<int>(childData);
      front -> children.push_back(child); 
     
      pendingNodes.push(child);
    } 
  }

  return root;
}

void printTree(TreeNode<int> * root){
  
  //NOTE -> this is an edge case not an base case
  if(root == NULL)
    return;

  cout << root -> data << ":";

  //NOTE -> using for each loop for iterating over vectors
  for(auto element : root -> children){
    cout << element -> data << " ";
  }

  cout << "\n";

  for(auto element : root -> children){
    printTree(element);
  }

/*NOTE -> Using for loop for iterating over vectors
  for(int i = 0; i < root -> children.size(); i++){
    cout << root -> children[i] -> data << " "; 
  }

  cout << "\n";

  for(int i = 0; i < root -> children.size(); i++){
    printTree(root -> children[i]);
  }
*/

}

void printTreeLevelWise(TreeNode<int> * root){
  //NOTE -> printing level wise
  queue<TreeNode<int> *> nodeData;

  nodeData.push(root);

  while(!nodeData.empty()){
    TreeNode<int>* front = nodeData.front();
    nodeData.pop();

    cout << front -> data << ":";

    for(int i = 0; i < front -> children.size(); i++){
      nodeData.push(front -> children[i]);
        
      if(i == (front -> children.size() - 1)){
        cout << front -> children[i] -> data;
      }else{
        cout << front -> children[i] -> data << ",";
      }
    }
    
    cout << "\n"; 
  }
}

int main(){

  TreeNode<int>* root = takeInputLevelWise();

  printTreeLevelWise(root);  

/*NOTE -> dynamically allocating
  TreeNode<int>* root = new TreeNode<int>(1);  
  TreeNode<int>* node1 = new TreeNode<int>(2);  
  TreeNode<int>* node2 = new TreeNode<int>(3);  

  root -> children.push_back(node1);
  root -> children.push_back(node2);

  printTree(root);

*/

/*NOTE -> Statically allocating
  TreeNode<int> root(1);  
  TreeNode<int> node1(2);  
  TreeNode<int> node2(3); 

  root.children.push_back(&node1);
  root.children.push_back(&node2);

  printTree(&root);
*/
  
  return 0;
}
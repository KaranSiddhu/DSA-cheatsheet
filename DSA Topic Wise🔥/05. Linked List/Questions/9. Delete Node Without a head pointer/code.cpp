#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - You are given a pointer to the node which is to be deleted from the linked list of N nodes.The task is to delete the node.

template <typename T>
class Node{
public:
  T data;
  Node<T> *next;

  Node(T data){
    this -> data = data;
    next = NULL;
  }
};

Node<int>* takeInput(){
  int data;
  cin >> data;

  Node<int>* head = NULL;
  Node<int>* tail = NULL;

  while(data != -1){
    Node<int>* newNode = new Node<int>(data);

    if(head == NULL){
      head = newNode;
      tail = newNode;
    }else{
      tail -> next = newNode;
      tail = newNode;
    }

    cin >> data;
  }
  return head;
}

void print(Node<int>* head){
  Node<int>* temp = head;
  while(temp){
    cout << temp -> data << "->";
    temp = temp -> next;
  }
  cout << "NULL\n";
}

Node<int>* findNode(Node<int>* head, int n){
  Node<int>* temp = head;
  while(temp){
    if(temp -> data == n)
      break;
    
    temp = temp -> next;
  }
  return temp;
}

void deleteNodeWithoutHead(Node<int>* del){
  Node<int>* temp = del -> next;
  del -> data = del -> next -> data;
  del -> next = del -> next -> next;
  delete temp;  
}

int main(){

  Node<int>* head = takeInput();
  print(head);

  int n;
  cout << "Enter data to delete from linked list -\n";
  cin >> n; 

  Node<int>* del = findNode(head, n);

  deleteNodeWithoutHead(del);
  print(head);

  return 0;
}
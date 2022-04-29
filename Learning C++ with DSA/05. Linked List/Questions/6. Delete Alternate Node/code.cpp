#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Given a Singly Linked List of size N, delete all alternate nodes of the list.

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

int countNode(Node<int>* head){
  int c = 0;
  Node<int>* temp = head;
  while(temp){
    c++;
    temp = temp -> next;
  }
  return c;
}

void deleteAlternateNodes(Node<int>* head){
  Node<int>* temp = head;

  while(temp && temp -> next){
    Node<int>* t = temp -> next;
    temp -> next = t -> next;
    delete t;

    temp = temp -> next;    
  }

}

int main(){

  Node<int>* head = takeInput();

  cout << "Before deleting\n";
  print(head);

  deleteAlternateNodes(head);
  cout << "After deleting \n";
  print(head);

  return 0;
}
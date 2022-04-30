#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - delete a node at given index i

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
    cout << temp -> data << " -> ";
    temp = temp -> next;
  }
  cout << " NULL\n";
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

Node<int>* deleteNode(Node<int>* head, int i){
  int count = 0;  
  Node<int>* temp = head;

  if(head == NULL)
    return head;
  
  //Delete a node at 0th index
  if(i == 0){
    head = temp -> next;
    delete temp;
    return head;
  }

  if(i >= countNode(head))
    return head;
  
  while(temp != NULL && count < (i-1)){
    temp = temp -> next;
    count++;
  }

  if(temp != NULL){
    Node<int>* a = temp -> next;
    Node<int>* b = a -> next;
    temp -> next = b;
    delete a;
  }

  return head;
}

int main(){

  Node<int> *head = takeInput();
  cout << "Before Deletion - ";
  print(head);

  head = deleteNode(head, 3);

  cout << "After Deletion - ";
  print(head);
  
  return 0;
}

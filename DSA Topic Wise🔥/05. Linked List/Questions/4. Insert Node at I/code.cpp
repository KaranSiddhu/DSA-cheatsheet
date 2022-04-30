#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Insert a node at given index I

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

Node<int>* insertNode(Node<int>* head, int i, int data){
  int count = 0;
  Node<int>* newNode = new Node<int>(data);
  Node<int>* temp = head;

  //Adding in 0th position
  if(i == 0){
    newNode -> next = head;
    head = newNode;
    return head;
  }

  while(temp != NULL && count < (i-1)){
    temp = temp -> next;
    count++;
  }

  if(temp != NULL){
    newNode -> next = temp -> next;
    temp -> next = newNode;
  }

  return head;
}

int main(){

  Node<int> *head = takeInput();
  cout << "Before - ";
  print(head);
  
  head = insertNode(head, 3, 100);

  cout << "After - ";
  print(head);
  
  return 0;
}

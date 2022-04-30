#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
class Node{
public:
  T data; 
  Node<T> *next;

  Node(T data){
    this->data = data;
    next = NULL;
  }
};

Node<int> *takeInput(){
  int data;
  cin >> data;

  Node<int> *head = NULL;
  Node<int> *tail = NULL;

  while(data != -1){
    Node<int> *newNode = new Node<int>(data);

    if (head == NULL){
      head = newNode;
      tail = newNode;
    }else{
      tail->next = newNode;
      tail = newNode;
    }

    cin >> data;
  }

  return head;
}

void print(Node<int> *head){
  Node<int> *temp = head;
  while (temp != NULL){
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << "\n";
}

int main(){

  Node<int> *head = takeInput();
  print(head);

  return 0;
}
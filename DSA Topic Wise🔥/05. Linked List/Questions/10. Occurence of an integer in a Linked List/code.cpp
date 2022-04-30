#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Given a singly linked list and a key, count the number of occurrences of given key in the linked list.

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

int count(Node<int>* head, int n){
  int c = 0;
  Node<int>* temp = head;
  while(temp){
    if(temp -> data == n)
      c++;
    temp = temp -> next;
  }

  return c;
}

int main(){

  Node<int>* head = takeInput();
  print(head);

  int n;
  cin >> n;

  cout << n << " appears " << count(head, n) << " times in Linked List.";
  
  return 0;
}
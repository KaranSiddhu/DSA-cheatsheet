#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Given a linked list and number n, your task is to print the sum of last n nodes.

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

int countNodes(Node<int>* head){
  int c = 0;
  Node<int>* temp = head;
  while(temp){
    c++;
    temp = temp -> next;
  }
  return c;
}

int sumOfLastN(Node<int>* head, int n){
  int len = countNodes(head);
  int i = len - n;

  if(n > len)
    return -1;

  Node<int>* temp = head;

  while(i > 0){
    temp = temp -> next;
    i--;
  }

  int sum = 0;

  while(temp != NULL){
    sum += temp -> data;
    temp = temp -> next;
  }

  return sum;
}

int main(){

  Node<int>* head = takeInput();
  print(head);

  int n;
  cin >> n;

  cout << "The sum of last " << n << " nodes is " << sumOfLastN(head, n);

  return 0;
}
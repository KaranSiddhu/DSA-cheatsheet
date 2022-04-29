#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Print the middle element in a given linked list

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

void printMiddle(Node<int>* head){
  int len = countNodes(head);
  int midIndex = (len - 1)/2;
  int c = 0;

  Node<int>* temp = head;

  while(temp){
    if(c == midIndex){
      cout << "Middle element is " << temp -> data << "\n"; 
      break;
    }
    c++;
    temp = temp -> next;
  }
}

int main(){

  Node<int>* head = takeInput();

  print(head);

  printMiddle(head);

  return 0;
}
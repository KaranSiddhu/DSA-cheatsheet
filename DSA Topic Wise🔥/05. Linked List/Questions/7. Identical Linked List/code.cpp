#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Ques - Given two linked list, check whether the two linked list is identical or not

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

bool isIdentical(Node<int>* head1, Node<int>* head2){
  if(countNode(head1) != countNode(head2))
    return false;

  Node<int>* temp1 = head1;
  Node<int>* temp2 = head2;
  
  while(temp1 && temp2){
    if((temp1 -> data) != (temp2 -> data))
      return false;

    temp1 = temp1 -> next;
    temp2 = temp2 -> next;
  }

  return true;
} 


int main(){

  Node<int>* head1 = takeInput();
  Node<int>* head2 = takeInput();

  string ans = isIdentical(head1, head2) ? 
  "True, both Linked List are identical" 
  : "False, both Linked List are not identical" ;

  cout << ans << "\n";

  return 0;
}
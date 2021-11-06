#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node{
public:
  int data;
  Node *next;

  Node(int data){
    this->data = data;
    next = NULL;
  }
};

Node *takeInput(){
  int data;
  cin >> data;

  Node *head = NULL;
  Node *tail = NULL;

  while (data != -1){
    Node *newNode = new Node(data);

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

void print(Node *head){
  Node *temp = head;
  while (temp != NULL){
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << "\n";
}

Node *insertNode(Node *head, int i, int data){
  Node *newNode = new Node(data);
  int count = 0;
  Node *temp = head;

  if (i == 0)
  {
    newNode->next = head;
    head = newNode;
    return head;
  }

  while (temp != NULL && count < i - 1)
  {
    temp = temp->next;
    count++;
  }

  if (temp != NULL)
  {
    newNode->next = temp->next;
    temp->next = newNode;
  }

  return head;
}

int length(Node *head){
  int c = 0;
  Node *temp = head;

  while (temp){
    c++;
    temp = temp->next;
  }

  return c;
}

Node *deleteNode(Node *head, int i){
  int count = 0;
  Node *temp = head;

  if (head == NULL)
    return head;

  if (i == 0){
    head = temp->next;
    delete temp;

    return head;
  }

  if (i >= length(head)){
    return head;
  }

  while (temp != NULL && count < i - 1){
    temp = temp->next;
    count++;
  }

  if (temp != NULL){
    Node *a = temp->next;
    Node *b = a->next;
    temp->next = b;

    delete a;
  }

  return head;
}

void printMiddle(Node *head){
  int l = length(head);
  Node *temp = head;
  int c = 0;

  int midIndex = (l - 1)/2;

  while(temp){
    if(c == midIndex)
      cout << "Middle Element is " << temp -> data << "\n";
    c++;
    temp = temp -> next;
  }

}

int main(){

  Node *head = takeInput();
  print(head);

  printMiddle(head);  

  return 0;
}
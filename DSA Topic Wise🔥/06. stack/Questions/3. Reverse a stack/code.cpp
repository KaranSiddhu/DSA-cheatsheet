#include <bits/stdc++.h>
using namespace std;

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

template <typename T>
class Stack {
  Node<T> *head;
  int size;

public:
  Stack(){
    head = NULL;
    size = 0;
  }

  int getSize(){
    return size;
  }

  int isEmpty(){
    return size == 0;
  }

  void push(T element){
    Node<T> *newData = new Node<T>(element);
    newData -> next = head;
    head = newData;
    size++;
  }

  T pop(){
    if(isEmpty())
      return 0;

    T ans = head -> data;

    Node<T> *temp = head;
    
    head = head -> next;

    delete temp;
    
    size--;
    
    return ans;
  }

  T top(){
    if(isEmpty())
      return 0;

    return head -> data;
  }
void print(){
    Node<T> *temp = head;
    for(int i = 0; i < size; i++){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    cout << "\n";
  }
};


void reverseStack(Stack<int> &s1, Stack<int> &s2) {

	int x;
  while(!s1.isEmpty()){
    x = s1.top();
    s2.push(x);
    s1.pop();
  }
  s1=s2;
}

int main(){

  Stack<int> s1, s2;
  int size;
  cin >> size;

  for (int i = 0, val; i < size; i++) {
    cin >> val;
    s1.push(val);
  }

  reverseStack(s1, s2);
  
  while (!s1.isEmpty()) {
    cout << s1.top() << " ";
    s1.pop();
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

//NOTE Question - Balanced Parenthesis
//Given an equation {a + [b - (c * d)] + g}, check if the given equation have a Balanced Parenthesis or not using Stack.

//Input format
//String - {a + [b - (c * d)] + g}
//Output fotmat
//Boolean - T or F

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
  Stack() {
    head = NULL;
    size = 0;
  }

  int getSize(){
    return size;
  }

  bool isEmpty(){
    return size == 0;
  }

  void push(T element){
    Node<T> *newNode = new Node<T>(element);
    newNode -> next = head;
    head = newNode; 
    size++;
  } 

  T pop(){
    if(isEmpty()) return 0;

    T ans = head -> data;
    Node<T> *temp = head;
    head = head -> next;

    delete temp;
    
    size--;
    return ans;
  }

  T top(){
    if(isEmpty()) return 0;
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

bool isBalanced(string s) {
  Stack<char> s1;

  for(int i = 0; i < s.length(); i++){
    //{a + [b - (c * d)] + g}
    //Checking for opening brackets - {, [, ( and pushing them into the stack
    if((s[i] == '{') || (s[i] == '(') || (s[i] == '['))
      s1.push(s[i]);
    
    if(s[i] == '}'){
      if(s1.top() == '{') 
        s1.pop();
      else return false;
    }

    if(s[i] == ')'){
      if(s1.top() == '(') 
        s1.pop();
      else return false;
    }

    if(s[i] == ']'){
      if(s1.top() == '[') 
        s1.pop();
      else return false;
    }

  }

  if(s1.isEmpty()) return true;

  else return false;
}

int main(){
  

  string s;
  getline(cin, s);

  cout << isBalanced(s) ? "true" : "false";

  return 0;
}


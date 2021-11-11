#include <bits/stdc++.h>
using namespace std;
#define ll long long

//NOTE stack using LL and template
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

int main(){

  Stack<int> s;
  s.push(10);  
  s.push(20);  
  s.push(30);

  s.print();  
  cout << s.getSize();

  return 0;
}


/* NOTE Stack Implementation using array 
class Stack{
  //Implementing Stack Using Arrays
  int *data;
  int nextIndex;
  int capacity;
public:
  Stack(){
    capacity = 4;
    data = new int[capacity];
    nextIndex = 0;
  }

  int size(){
    return nextIndex;
  }

  bool isEmpty(){
    return nextIndex == 0;
  }

  void push(int element){
    if(nextIndex == capacity){
      //NOTE double the size of our array when older array is full
      
      int *newData = new int[2*capacity];
      for(int i = 0; i < capacity; i++){
        newData[i] = data[i];
      }
      capacity *= 2;
      delete [] data;
      data = newData;

      // cout << "Stack Is Full\n";
      // return;
    }
    data[nextIndex++] = element;
  }

  int pop(){
    if(isEmpty()){
      cout << "Stack Is Empty\n";
      return INT_MIN;
    }
    return data[--nextIndex];
  }

  int top(){
    if(isEmpty()){
      cout << "Stack Is Empty\n";
      return INT_MIN;
    }
    return data[nextIndex - 1];
  }

  void print(){
    for(int i = 0; i < nextIndex; i++)
      cout << data[i] << " ";

    cout << "\n";
  }

  void takeInput(){
    while (true){
      int n;
      cin >> n;
      if(n == -1) break;
      push(n);
    }
  }
};
*/

/*NOTE Stack using template
template <typename T>
class Stack{
  T *data;
  int nextIndex;
  int capacity;
public:
  Stack(){
    capacity = 4;
    data = new T[capacity];
    nextIndex = 0;
  }

  int size(){
    return nextIndex;
  }

  bool isEmpty(){
    return nextIndex == 0;
  }

  void push(T element){
    if(nextIndex == capacity){
      //NOTE double the size of our array when older array is full
      
      T *newData = new T[2*capacity];
      for(int i = 0; i < capacity; i++){
        newData[i] = data[i];
      }
      capacity *= 2;
      delete [] data;
      data = newData;

      // cout << "Stack Is Full\n";
      // return;
    }
    data[nextIndex++] = element;
  }

  T pop(){
    if(isEmpty()){
      cout << "Stack Is Empty\n";
      return 0;
    }
    return data[--nextIndex];
  }

  T top(){
    if(isEmpty()){
      cout << "Stack Is Empty\n";
      return 0;
    }
    return data[nextIndex - 1];
  }

  void print(){
    for(int i = 0; i < nextIndex; i++)
      cout << data[i] << " ";

    cout << "\n";
  }

  
};
*/

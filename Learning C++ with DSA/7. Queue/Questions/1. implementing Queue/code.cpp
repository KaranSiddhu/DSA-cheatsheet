#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*NOTE queue using Array
template <typename T>
class Queue {
  
  T *data;
  int nextIndex;
  int firstIndex;  
  int size;//This variable represent queue size
  int capacity;//This variable represent array size
public:
  Queue(int s){
    data = new T[s];
    nextIndex = 0;
    firstIndex = -1;
    size = 0;
    capacity = s;
  }

  int getSize(){
    return size;
  }

  bool isEmpty(){
    return size == 0;
  }

  void enqueue(T element){
    if(size == capacity){
      T *newData = new T[2 * capacity];
      int j = 0;
      
      for(int i = firstIndex; i < capacity; i++){
        newData[j] = data[i];
        j++; 
      }

      for(int i = 0; i < firstIndex; i++){
        newData[j] = data[i];
        j++;
      }

      delete [] data;
      data = newData;
      firstIndex = 0;
      nextIndex = capacity;
      capacity *= 2;

      // cout << "Queue Overflow" << "\n";
      // return;
    }

    data[nextIndex] = element;
    nextIndex = (nextIndex + 1) % capacity;
    size++;
    if(firstIndex == -1) firstIndex = 0;
  }

  T dequeue(){
    if(isEmpty()){
      cout << "Queue is empty" << "\n";
      return 0;
    }
    T ans = data[firstIndex];
    firstIndex = (firstIndex + 1) % capacity; 
    size--;
    return ans;

  }

  T front(){
    if(isEmpty()){
      cout << "Queue is empty" << "\n";
      return 0;
    }

    return data[firstIndex];
  }

  void print() {

    for(int i = firstIndex; i < capacity; i++){
      cout << data[i] << " ";
    }

    for(int i = 0; i < firstIndex; i++){
      cout << data[i] << " ";
    }
    cout << "\n";
  }

};
*/

//NOTE queue using LL

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
class Queue {
  Node<T> *head;
  Node<T> *tail;
  int size;

public: 
  Queue(){
    head = NULL;
    tail = NULL;
    size = 0;
  }

  int getSize(){
    return size;
  }

  bool isEmpty(){
    return size == 0;
  }

  void enqueue(T element){
    Node<T> *newNode = new Node<T>(element);
    if(head == NULL){
      head = newNode;
      tail = newNode;
    }else{
      tail -> next = newNode;
      tail = newNode;
    } 
    size++;
  }

  T dequeue(){
    if(isEmpty()) 
      return 0;

    T ans = head -> data;
    Node<T> *temp = head;
    head = head -> next;
    delete  temp;
    size--;
    return ans;
  }

  T front(){
    if(isEmpty()) 
      return 0;

    return head -> data;
  }

  void print() {
    Node<T> *temp = head;
    while(temp){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
  }

};

int main(){
  Queue<int> q;

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  q.enqueue(50);

  cout << "Removed - " << q.dequeue() << "\n";
  
  q.enqueue(150);

  cout << "Front - " << q.front() << "\n";
  cout << "Size - " << q.getSize() << "\n";
  cout << "Is Empty - " << q.isEmpty() << "\n";

  q.print();
  return 0;
}
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
using namespace std;



//Question 2:

template <class T>
class Queue;

template <class T>
class Node{
  T _data;
  Node<T>* _next;
  Node(T data, Node<T>* next = (Node<T>*)0){
    _data = data;
    _next = next;
  }
  friend class Queue<T>;
};



template <class T>
class Queue{
  Node<T>* _head;
  Node<T>* _tail;
  int _size;
public:
  Queue(){
    _tail = _head = (Node<T>*)0;
  }

  void add(T data){
    Node<T>* NN = new Node<T>(data);
    if(_tail){
      _tail->_next = NN;
      _tail = NN;
    }
    else{
      _head = _tail = NN;
    }
    _size++;
  }
  T remove(){
    T data = _head->_data;
    Node<T>* ToDel = _head;
    if(_head == _tail){
      _head = _tail = (Node<T>*)0;
    }
    else{
      _head = _head->_next;
    }
    delete ToDel;
    _size--;
    return data;
  }
  bool isEmpty(){
    return _head == (Node<T>*)0;
  }
  int size(){
    return _size;
  }
  virtual ~Queue(){
    while(!isEmpty()){
      remove();
    }
  }
};

// Question 3;

template <class T>
class SQueue:public Queue<T>, public fstream{
  char _fn[80];
public:
  SQueue(const char* fn):fstream(fn,ios::in|ios::binary){
    T data;
    strcpy(_fn,fn);
    while(!fail()){
      fstream::read((char*)&data, sizeof(data));
      if(!fail()){
        Queue<T>::add(data);
      }
    }
    clear();
    close();
  }
  ~SQueue(){
    T data;
    open(_fn,ios::out|ios::binary|ios::trunc);
    while(!isEmpty()){
      data = Queue<T>::remove();
      write((const char*)&data, sizeof(data));
    }
    close();
  }
};

int main(int argc, char* argv[]){
  unsigned int val;
  sscanf(argv[1], "%u", &val);
  unsigned int m = 1 << sizeof(val) * 8 -1;
  while(m){
    cout<<!!(val & m);
    m = m >> 1;
  }
  cout<<endl;
  cout<<"----------------------"<<endl;
  SQueue<int> S("ints.bin");
  while(!S.isEmpty()){
    cout<<S.remove()<<endl;
  }
}
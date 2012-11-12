#pragma once

template <class T>
class Stack;


template <class T>
class Node{
  T _data;
  Node<T>* _next;
  Node(T data, Node<T>* next = (Node<T>*)0){
    _data = data;
    _next = next;
  }
  friend class Stack<T>;
};

template <class T>
class Stack{
  Node<T>* _top;
public:
  Stack(){
    _top = (Node<T>*)0;
  }
  void push(T data);
  T pop();
  bool isEmpty();
  virtual ~Stack();
};

template <class T>
Stack<T>::~Stack(){
  Node<T>* toDel;
  while(toDel = _top){
    _top = _top->_next;
    delete toDel;
  }
}

template <class T>
T Stack<T>::pop(){
  T ret = _top->_data;
  Node<T>* ToBeDel = _top;
  _top = _top->_next;
  delete ToBeDel;
  return ret;
}

template <class T>
void Stack<T>::push(T data){
  Node<T>* temp = new Node<T>(data, _top);
  _top = temp;
}

template <class T>
bool Stack<T>::isEmpty(){
  return _top == (Node<T>*)0;
}


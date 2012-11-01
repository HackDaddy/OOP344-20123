#include "queue.h"

Node::Node(int data, Node* next){
  _data = data;
  _next = next;
}


Queue::Queue(){
  _tail = _head = (Node*)0;
}
void Queue::add(int data){
  Node* NN = new Node(data);
  if(_tail){
    _tail->_next = NN;
    _tail = NN;
  }
  else{
    _head = _tail = NN;
  }
}
int Queue::remove(){
  int data = _head->_data;
  Node* ToDel = _head;
  if(_head == _tail){
    _head = _tail = (Node*)0;
  }
  else{
    _head = _head->_next;
  }
  delete ToDel;
  return data;
}
bool Queue::isEmpty(){
  return _head == (Node*)0;
}
Queue::~Queue(){
  while(!isEmpty()){
    remove();
  }
}
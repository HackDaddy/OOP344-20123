#include "queue.h"

Node::Node(int data, Node* next){
  _data = data;
//  _next = _next;  the bug was here
  _next = next;
}

Queue::Queue(){
  _head = _tail = (Node*)0;
}
void Queue::add(int data){
  Node* newnode = new Node(data);
  if(!_tail){
    _tail = _head = newnode;
  }
  else{
    _tail->_next = newnode;
  //  (*_tail)._next = newnode;  // same as previous
    _tail = newnode;
  }
}
int Queue::remove(){
  int data = _head->_data;
  Node* todel = _head;
  if(_head == _tail){
    _tail = (Node*)0;
  }
  _head = _head->_next;
  delete  todel;
  return data;
}
bool Queue::isEmpty(){
  return !_head;
}
Queue::~Queue(){
  if(!isEmpty()){
    remove();
  }
}


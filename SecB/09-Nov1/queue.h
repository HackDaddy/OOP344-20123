#ifndef __FS_QUEUE_H
#define __FS_QUEUE_H


class Queue;

class Node{
  int _data;
  Node* _next;
  Node(int data, Node* next = (Node*)0);
  friend class Queue;
};



class Queue{
  Node* _head;
  Node* _tail;
public:
  Queue();
  void add(int data);
  int remove();
  bool isEmpty();
 // int operator[](unsigned int index); //loops back
// unsigned int size();
  virtual ~Queue();
};





#endif

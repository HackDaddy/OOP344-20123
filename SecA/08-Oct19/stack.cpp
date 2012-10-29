#include <iostream>
using namespace std;

class Stack;

class Node{
  int _data;
  Node* _next;
  Node(int data, Node* next = (Node*)0){
    _data = data;
    _next = next;
  }
  friend class Stack;
};


class Stack{
  Node* _top;
public:
  Stack();
  virtual ~Stack();
  void push(int data);
  int pop();
  bool isEmpty();
};

Stack::Stack(){
  _top = (Node*)0;
}
Stack::~Stack(){
  while(!isEmpty()){
    pop();
  }
}
void Stack::push(int data){
  Node* newnode = new Node(data);
  newnode->_next = _top;
  _top = newnode;
// Node* newnode = new Node(data, _top);
}

int Stack::pop(){
  int data;
  data = _top->_data;
  Node* ToBeDel = _top;
  _top = _top->_next;
  delete ToBeDel;
  return data;
}

bool Stack::isEmpty(){
  return !_top;
}

int main(){
  Stack S;
  int i;
  int val = 10;
  for(i=0;i<5;i++){
    S.push(val += 10);
  }
  while(!S.isEmpty()){
    cout<<S.pop()<<endl;
  }
  return 0;
}

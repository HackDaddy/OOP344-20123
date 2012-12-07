#include <cstring>
using namespace std;
class DIR{
  char _name[1024];
public:
  DIR(const char* name){
    strncpy(_name, name,1024);
    _name[1023]=0;
  }
  const char* Name()const{
    return (const char*)_name;
  }
};

class DStack;

class Node{
  DIR _data;
  Node* _next;
  Node(DIR data, Node* next = (Node*)0){
    _data = data;
    _next = next;
  }
  friend class DStack;
};


class DStack{
  Node* _top;
public:
  DStack(){
    _top = (Node*)0;
  }
  void push(DIR data);
  DIR pop();
  bool isEmpty();
  void path();
  virtual ~DStack();
};

int main(){
  DStack d;
  d.push(DIR("github"));
  d.push(DIR("oop344"));
  d.push(DIR("20123"));
  d.push(DIR("SecA"));
  d.path();
  cout<<endl:
  d.pop();
  d.pop();
  d.path();
  cout<<endl;
  return 0;
}
